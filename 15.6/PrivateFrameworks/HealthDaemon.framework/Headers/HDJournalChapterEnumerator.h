// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDJOURNALCHAPTERENUMERATOR_H
#define HDJOURNALCHAPTERENUMERATOR_H

@class NSURL, NSError, NSMutableArray;
@protocol HDJournalChapterEnumeratorTestsDelegate;

#import <Foundation/Foundation.h>


@interface HDJournalChapterEnumerator : NSObject {
    NSURL *_URL;
    NSInteger _currentIndex;
    BOOL _hasLoadedPersistedJournalNames;
    NSInteger _maxAllowedOpenJournalChapterCount;
    NSInteger _totalJournalChapterCount;
    NSError *_cachedError;
    NSMutableArray *_remainingJournalChapters;
    NSMutableArray *_openJournalChapters;
}


@property (readonly, nonatomic) NSUInteger currentJournalChapterIndex;
@property (readonly, nonatomic) BOOL hasJournalChapters;
@property (nonatomic) NSInteger maxAllowedOpenJournalChapterCount;
@property (readonly, nonatomic, getter=hasMoreJournalChapters) BOOL moreJournalChapters;
@property (readonly, nonatomic) NSUInteger totalJournalChapterCount;
@property (readonly, nonatomic, getter=_totalOpenJournalChapterCount) NSUInteger totalOpenJournalChapterCount;
@property (weak, nonatomic) NSObject<HDJournalChapterEnumeratorTestsDelegate> *unitTestDelegate; // ivar: _unitTestDelegate


+(NSInteger)journalChapterCountForURL:(id)arg0 ;
+(id)journalChaptersForURL:(id)arg0 error:(*id)arg1 ;
+(id)nextJournalChapterNameForURL:(id)arg0 ;
-(BOOL)loadSortedJournalChaptersWithError:(*id)arg0 ;
-(id)_openJournalChapters:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)nextOpenJournalChapterError:(*id)arg0 ;
-(void)closeJournalChapters;
-(void)dealloc;


@end


#endif