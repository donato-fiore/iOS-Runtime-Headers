// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSTREAMDATASTORE_H
#define BMSTREAMDATASTORE_H



#import "BMStreamDatastoreBase.h"
#import "BMStreamTombstoneEventDatastore.h"

@interface BMStreamDatastore : BMStreamDatastoreBase {
    BMStreamTombstoneEventDatastore *_tombstoneStore;
}


@property (readonly, nonatomic) BOOL includeTombstones; // ivar: _includeTombstones


-(BOOL)updatePruningPolicy:(id)arg0 ;
-(id)initForPruningWithStream:(id)arg0 config:(id)arg1 includeTombstones:(BOOL)arg2 ;
-(id)initForReadingWithStream:(id)arg0 config:(id)arg1 includeTombstones:(BOOL)arg2 ;
-(id)initForWritingWithStream:(id)arg0 config:(id)arg1 includeTombstones:(BOOL)arg2 ;
-(id)initWithStream:(id)arg0 permission:(NSUInteger)arg1 config:(id)arg2 includeTombstones:(BOOL)arg3 ;
-(id)initWithStream:(id)arg0 streamPath:(id)arg1 permission:(NSUInteger)arg2 config:(id)arg3 includeTombstones:(BOOL)arg4 ;
-(id)newTombstoneEnumeratorFromBookmark:(id)arg0 ;
-(id)newTombstoneEnumeratorFromStartTime:(CGFloat)arg0 ;
-(id)tombstoneStore;
-(void)didMarkFrameAsRemovedWithSegmentName:(id)arg0 frame:(id)arg1 reason:(NSUInteger)arg2 outTombstoneBookmark:(*id)arg3 ;
-(void)writeTombstoneEventWithSegmentName:(id)arg0 offset:(NSUInteger)arg1 length:(NSUInteger)arg2 reason:(NSUInteger)arg3 ;
-(void)writeTombstoneEventWithSegmentName:(id)arg0 offset:(NSUInteger)arg1 length:(NSUInteger)arg2 reason:(NSUInteger)arg3 outTombstoneBookmark:(*id)arg4 ;


@end


#endif