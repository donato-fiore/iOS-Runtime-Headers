// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBDEVICESETTINGS_H
#define CBDEVICESETTINGS_H

@class NSString;
@protocol CUXPCCodable;

#import <Foundation/Foundation.h>


@interface CBDeviceSettings : NSObject <CUXPCCodable>



@property (nonatomic) char aclPriority; // ivar: _aclPriority
@property (nonatomic) char allowsAutoRoute; // ivar: _allowsAutoRoute
@property (nonatomic) char audioRouteHidden; // ivar: _audioRouteHidden
@property (nonatomic) NSUInteger deviceFlagsMask; // ivar: _deviceFlagsMask
@property (nonatomic) NSUInteger deviceFlagsValue; // ivar: _deviceFlagsValue
@property (nonatomic) char doubleTapActionLeft; // ivar: _doubleTapActionLeft
@property (nonatomic) char doubleTapActionRight; // ivar: _doubleTapActionRight
@property (nonatomic) char microphoneMode; // ivar: _microphoneMode
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) char placementMode; // ivar: _placementMode
@property (nonatomic) char relinquishAudioRoute; // ivar: _relinquishAudioRoute
@property (nonatomic) char smartRoutingMode; // ivar: _smartRoutingMode


-(id)description;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif