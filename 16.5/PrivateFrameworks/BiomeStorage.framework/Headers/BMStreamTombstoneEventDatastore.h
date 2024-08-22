// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSTREAMTOMBSTONEEVENTDATASTORE_H
#define BMSTREAMTOMBSTONEEVENTDATASTORE_H



#import "BMStreamDatastoreBase.h"
#import "BMStreamDatastore.h"

@interface BMStreamTombstoneEventDatastore : BMStreamDatastoreBase {
    BMStreamDatastore *_streamDatastore;
}




-(BOOL)deleteEventAtBookmark:(id)arg0 outTombstoneBookmark:(*id)arg1 ;
-(BOOL)writeEventWithEventBody:(id)arg0 timestamp:(CGFloat)arg1 outBookmark:(*id)arg2 ;
-(BOOL)writeTombstoneEvent:(id)arg0 outTombstoneBookmark:(*id)arg1 ;
-(id)initWithStream:(id)arg0 streamPath:(id)arg1 permission:(NSUInteger)arg2 config:(id)arg3 streamDatastore:(id)arg4 ;
-(id)newEnumeratorFromBookmark:(id)arg0 ;
-(id)newEnumeratorFromBookmark:(id)arg0 options:(NSUInteger)arg1 ;
-(id)newEnumeratorFromStartTime:(CGFloat)arg0 ;
-(id)newEnumeratorFromStartTime:(CGFloat)arg0 options:(NSUInteger)arg1 ;
-(id)originalEventFromTombstoneEvent:(id)arg0 ;
-(void)enumerateEventsFrom:(CGFloat)arg0 to:(CGFloat)arg1 options:(NSUInteger)arg2 usingBlock:(id)arg3 ;


@end


#endif