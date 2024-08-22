// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRTHREADNETWORKDIAGNOSTICSCLUSTERNEIGHBORTABLE_H
#define MTRTHREADNETWORKDIAGNOSTICSCLUSTERNEIGHBORTABLE_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRThreadNetworkDiagnosticsClusterNeighborTable : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *age; // ivar: _age
@property (copy, nonatomic) NSNumber *averageRssi; // ivar: _averageRssi
@property (copy, nonatomic) NSNumber *extAddress; // ivar: _extAddress
@property (copy, nonatomic) NSNumber *frameErrorRate; // ivar: _frameErrorRate
@property (copy, nonatomic) NSNumber *fullNetworkData; // ivar: _fullNetworkData
@property (copy, nonatomic) NSNumber *fullThreadDevice; // ivar: _fullThreadDevice
@property (copy, nonatomic) NSNumber *isChild; // ivar: _isChild
@property (copy, nonatomic) NSNumber *lastRssi; // ivar: _lastRssi
@property (copy, nonatomic) NSNumber *linkFrameCounter; // ivar: _linkFrameCounter
@property (copy, nonatomic) NSNumber *lqi; // ivar: _lqi
@property (copy, nonatomic) NSNumber *messageErrorRate; // ivar: _messageErrorRate
@property (copy, nonatomic) NSNumber *mleFrameCounter; // ivar: _mleFrameCounter
@property (copy, nonatomic) NSNumber *rloc16; // ivar: _rloc16
@property (copy, nonatomic) NSNumber *rxOnWhenIdle; // ivar: _rxOnWhenIdle


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif