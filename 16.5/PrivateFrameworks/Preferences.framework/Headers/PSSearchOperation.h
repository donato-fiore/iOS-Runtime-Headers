// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSSEARCHOPERATION_H
#define PSSEARCHOPERATION_H

@class NSOperation, NSString, NSSet;
@protocol PSSearchOperationDelegate;


#import "PSSearchResults.h"

@interface PSSearchOperation : NSOperation

@property (readonly, copy) PSSearchResults *currentResults; // ivar: _currentResults
@property (weak) NSObject<PSSearchOperationDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isNewQuery) BOOL newQuery; // ivar: _newQuery
@property (readonly, copy, nonatomic) NSString *query; // ivar: _query
@property (readonly, copy, nonatomic) NSSet *rootEntries; // ivar: _rootEntries


+(struct __CFStringTokenizer *)_wordBoundaryTokenizer;
-(BOOL)_searchEntries:(id)arg0 forQuery:(id)arg1 ;
-(BOOL)_systemLanguageHasContinuousScript;
-(id)_filterEntriesMatchingQuery:(id)arg0 forQuery:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)initWithSearchQuery:(id)arg0 rootEntries:(id)arg1 ;
-(void)_didCancel;
-(void)dealloc;
-(void)main;


@end


#endif