// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSMOUSEPOINTERDEVICEPREFERENCES_H
#define BKSMOUSEPOINTERDEVICEPREFERENCES_H

@class NSString;
@protocol NSSecureCoding, BSProtobufSerializable;

#import <Foundation/Foundation.h>


@interface BKSMousePointerDevicePreferences : NSObject <NSSecureCoding, BSProtobufSerializable>



@property (nonatomic) NSInteger buttonConfigurationForHardwareButtonMice; // ivar: _buttonConfigurationForHardwareButtonMice
@property (nonatomic) NSInteger buttonConfigurationForVirtualButtonMice; // ivar: _buttonConfigurationForVirtualButtonMice
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger doubleTapDragMode; // ivar: _doubleTapDragMode
@property (nonatomic) BOOL enableNaturalScrolling; // ivar: _enableNaturalScrolling
@property (nonatomic) BOOL enableTapToClick; // ivar: _enableTapToClick
@property (nonatomic) BOOL enableTwoFingerSecondaryClick; // ivar: _enableTwoFingerSecondaryClick
@property (readonly) NSUInteger hash;
@property (nonatomic) float pointerAccelerationFactor; // ivar: _pointerAccelerationFactor
@property (nonatomic) float scrollAccelerationFactor; // ivar: _scrollAccelerationFactor
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)defaultPreferencesForHardwareType:(NSInteger)arg0 ;
+(id)protobufSchema;
-(BOOL)isEqual:(id)arg0 ;
-(id)didFinishProtobufDecodingWithError:(*id)arg0 ;
-(id)init;
-(id)initForProtobufDecoding;
-(id)initWithCoder:(id)arg0 ;
-(void)_fixMissingButtonConfigurations;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif