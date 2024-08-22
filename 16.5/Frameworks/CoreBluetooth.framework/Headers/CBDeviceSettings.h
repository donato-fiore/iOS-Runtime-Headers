// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBDEVICESETTINGS_H
#define CBDEVICESETTINGS_H

@class NSString;
@protocol CUXPCCodable;

#import <Foundation/Foundation.h>


@interface CBDeviceSettings : NSObject <CUXPCCodable>



@property (nonatomic) char aclPriority; // ivar: _aclPriority
@property (nonatomic) char allowsAutoRoute; // ivar: _allowsAutoRoute
@property (nonatomic) char audioRouteHidden; // ivar: _audioRouteHidden
@property (nonatomic) unsigned char clickHoldModeLeft; // ivar: _clickHoldModeLeft
@property (nonatomic) unsigned char clickHoldModeRight; // ivar: _clickHoldModeRight
@property (nonatomic) unsigned char crownRotationDirection; // ivar: _crownRotationDirection
@property (nonatomic) NSUInteger deviceFlagsMask; // ivar: _deviceFlagsMask
@property (nonatomic) NSUInteger deviceFlagsValue; // ivar: _deviceFlagsValue
@property (nonatomic) char doubleTapActionLeft; // ivar: _doubleTapActionLeft
@property (nonatomic) char doubleTapActionRight; // ivar: _doubleTapActionRight
@property (nonatomic) unsigned char endCallConfig; // ivar: _endCallConfig
@property (nonatomic) int listeningMode; // ivar: _listeningMode
@property (nonatomic) unsigned int listeningModeConfigs; // ivar: _listeningModeConfigs
@property (nonatomic) char microphoneMode; // ivar: _microphoneMode
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) char placementMode; // ivar: _placementMode
@property (nonatomic) char relinquishAudioRoute; // ivar: _relinquishAudioRoute
@property (nonatomic) char smartRoutingMode; // ivar: _smartRoutingMode
@property (nonatomic) char spatialAudioAllowed; // ivar: _spatialAudioAllowed
@property (nonatomic) int spatialAudioMode; // ivar: _spatialAudioMode


-(id)description;
-(id)init;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif