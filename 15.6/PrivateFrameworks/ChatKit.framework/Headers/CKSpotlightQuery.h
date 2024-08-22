// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSPOTLIGHTQUERY_H
#define CKSPOTLIGHTQUERY_H

@class NSArray, NSMutableDictionary, IMChatRegistry, MDSearchQuery, NSString;
@protocol MDSearchQueryDelegate, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface CKSpotlightQuery : NSObject <MDSearchQueryDelegate>

 {
    NSUInteger _resultIndex;
    NSArray *_searchResults;
    NSMutableDictionary *_chatGUIDToLatestSearchResult;
    NSObject<OS_dispatch_group> *_searchResultLoadingGroup;
    BOOL _cancelled;
}


@property (retain, nonatomic) IMChatRegistry *chatRegisteryOverride; // ivar: _chatRegisteryOverride
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, nonatomic) MDSearchQuery *currentQuery; // ivar: _currentQuery
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
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