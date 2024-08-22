// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUISTREAMINGBOOKMARKCACHE_H
#define VUISTREAMINGBOOKMARKCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VUIStreamingBookmarkCache : NSObject {
    NSMutableDictionary *_bookmarkCacheStore;
}




+(id)sharedInstance;
-(BOOL)resumeTimeAndTimestampByReference:(id)arg0 serverResumeTime:(id)arg1 serverBookmarkTimestamp:(id)arg2 mostRecentResumeTime:(*id)arg3 mostRecentBookmarkTimestamp:(*id)arg4 ;
-(id)init;
-(void)_activeAccountChangedNotification:(id)arg0 ;
-(void)addBookmark:(id)arg0 absoluteResumeTime:(id)arg1 absoluteBookmarkTimestamp:(id)arg2 relativeResumeTime:(id)arg3 relativeBookmarkTimestamp:(id)arg4 ;
-(void)dealloc;
-(void)removeBookmark:(id)arg0 ;
-(void)resumeTimeInfoByReference:(id)arg0 outAbsoluteResumeTime:(*id)arg1 outAbsoluteTimestamp:(*id)arg2 outMainContentRelativeResumeTime:(*id)arg3 outMainContentRelativeTimestamp:(*id)arg4 ;


@end


#endif