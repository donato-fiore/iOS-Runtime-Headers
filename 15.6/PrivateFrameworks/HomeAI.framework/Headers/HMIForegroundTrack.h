// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIFOREGROUNDTRACK_H
#define HMIFOREGROUNDTRACK_H

@class HMFObject, NSMutableArray, NSMutableSet, NSString;


#import "HMIForegroundBlob.h"

@interface HMIForegroundTrack : HMFObject

@property (readonly) NSMutableArray *blobs; // ivar: _blobs
@property (readonly) NSMutableSet *eventClasses; // ivar: _eventClasses
@property (readonly) HMIForegroundBlob *lastBlob;
@property (readonly) NSString *shortDescription;


-(BOOL)isExpiredAtTimeStamp:(struct ? )arg0 ;
-(BOOL)isStationaryAtTimeStamp:(struct ? )arg0 ;
-(NSUInteger)stationaryIndexToBoundingBox:(struct CGRect )arg0 ;
-(float)similarityToBoundingBox:(struct CGRect )arg0 ;
-(id)createEventForEventClass:(Class)arg0 ;
-(id)initWithBlob:(id)arg0 ;
-(void)appendBlob:(id)arg0 ;


@end


#endif