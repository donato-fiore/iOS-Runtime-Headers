// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMSEARCHABLEINDEXTOPHITSQUERY_H
#define EMSEARCHABLEINDEXTOPHITSQUERY_H

@class NSString, NSArray, NSMutableArray, NSProgress, NSLock, EFPromise;
@protocol EFLoggable, EFCancelable, NSProgressReporting, EMTopHitSearchQueryable;

#import <Foundation/Foundation.h>


@interface EMSearchableIndexTopHitsQuery : NSObject <EFLoggable, EFCancelable, NSProgressReporting>



@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *filterQueries; // ivar: _filterQueries
@property (retain, nonatomic) NSMutableArray *foundItems; // ivar: _foundItems
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSProgress *internalProgress; // ivar: _internalProgress
@property (readonly, copy, nonatomic) NSString *keyboardLanguage; // ivar: _keyboardLanguage
@property (readonly, nonatomic) NSUInteger limit; // ivar: _limit
@property (retain, nonatomic) NSLock *lock; // ivar: _lock
@property (retain, nonatomic) NSString *logPrefix; // ivar: _logPrefix
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly, copy, nonatomic) NSString *searchString; // ivar: _searchString
@property (retain, nonatomic) EFPromise *spotlightTopHitsQueryResultPromise; // ivar: _spotlightTopHitsQueryResultPromise
@property (readonly) Class superclass;
@property (retain) NSObject<EMTopHitSearchQueryable> *topHitSearchQuery; // ivar: _topHitSearchQuery


+(id)log;
-(id)initWithSearchString:(id)arg0 filterQueries:(id)arg1 bundleID:(id)arg2 keyboardLanguage:(id)arg3 limit:(NSUInteger)arg4 ;
-(id)topHitsQueryResult;
-(void)_cancel;
-(void)_configureTopHitsSearchQuery:(id)arg0 ;
-(void)_searchDidCompleteWithError:(id)arg0 ;
-(void)_searchFoundItems:(id)arg0 ;
-(void)cancel;
-(void)start;


@end


#endif