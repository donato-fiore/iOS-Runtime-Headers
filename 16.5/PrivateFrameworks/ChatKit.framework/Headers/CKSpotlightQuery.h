// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSPOTLIGHTQUERY_H
#define CKSPOTLIGHTQUERY_H

@class NSMutableDictionary, IMChatRegistry, MDSearchQuery, NSString, NSArray;
@protocol MDSearchQueryDelegate, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface CKSpotlightQuery : NSObject <MDSearchQueryDelegate>



@property (nonatomic) BOOL cancelled; // ivar: _cancelled
@property (retain, nonatomic) NSMutableDictionary *chatGUIDToLatestSearchResult; // ivar: _chatGUIDToLatestSearchResult
@property (retain, nonatomic) IMChatRegistry *chatRegisteryOverride; // ivar: _chatRegisteryOverride
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, nonatomic) MDSearchQuery *currentQuery; // ivar: _currentQuery
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger resultIndex; // ivar: _resultIndex
@property (retain, nonatomic) NSObject<OS_dispatch_group> *searchResultLoadingGroup; // ivar: _searchResultLoadingGroup
@property (retain, nonatomic) NSArray *searchResults; // ivar: _searchResults
@property (readonly) Class superclass;


-(id)chatRegistry;
-(id)initWithSearchText:(id)arg0 chatRegistryOverride:(id)arg1 startQuery:(BOOL)arg2 completionBlock:(id)arg3 ;
-(id)initWithSearchText:(id)arg0 completionBlock:(id)arg1 ;
// -(id)initWithSearchText:(id)arg0 completionBlock:(id)arg1 startQuery:(unk)arg2  ;
-(void)_callCompletion;
-(void)_cleanup;
-(void)_processSearchResults;
-(void)cancel;
-(void)dealloc;
-(void)searchQuery:(id)arg0 didFailWithError:(id)arg1 ;
-(void)searchQuery:(id)arg0 didReturnItems:(id)arg1 ;
-(void)searchQuery:(id)arg0 statusChanged:(NSUInteger)arg1 ;


@end


#endif