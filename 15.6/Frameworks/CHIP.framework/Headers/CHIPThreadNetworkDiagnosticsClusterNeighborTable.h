// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTHREADNETWORKDIAGNOSTICSCLUSTERNEIGHBORTABLE_H
#define CHIPTHREADNETWORKDIAGNOSTICSCLUSTERNEIGHBORTABLE_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPThreadNetworkDiagnosticsClusterNeighborTable : NSObject

@property (retain, nonatomic) NSNumber *age; // ivar: _age
@property (retain, nonatomic) NSNumber *averageRssi; // ivar: _averageRssi
@property (retain, nonatomic) NSNumber *extAddress; // ivar: _extAddress
@property (retain, nonatomic) NSNumber *frameErrorRate; // ivar: _frameErrorRate
@property (retain, nonatomic) NSNumber *fullNetworkData; // ivar: _fullNetworkData
@property (retain, nonatomic) NSNumber *fullThreadDevice; // ivar: _fullThreadDevice
@property (retain, nonatomic) NSNumber *isChild; // ivar: _isChild
@property (retain, nonatomic) NSNumber *lastRssi; // ivar: _lastRssi
@property (retain, nonatomic) NSNumber *linkFrameCounter; // ivar: _linkFrameCounter
@property (retain, nonatomic) NSNumber *lqi; // ivar: _lqi
@property (retain, nonatomic) NSNumber *messageErrorRate; // ivar: _messageErrorRate
@property (retain, nonatomic) NSNumber *mleFrameCounter; // ivar: _mleFrameCounter
@property (retain, nonatomic) NSNumber *rloc16; // ivar: _rloc16
@property (retain, nonatomic) NSNumber *rxOnWhenIdle; // ivar: _rxOnWhenIdle


-(id)init;


@end


#endif