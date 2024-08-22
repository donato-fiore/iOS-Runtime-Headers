// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMCONTINUITYCAPTURECAPABILITIES_H
#define CMCONTINUITYCAPTURECAPABILITIES_H

@class NSString, NSArray;
@protocol CMContinuityCaptureDictionaryRepresentable;

#import <Foundation/Foundation.h>


@interface CMContinuityCaptureCapabilities : NSObject <CMContinuityCaptureDictionaryRepresentable>



@property (readonly, nonatomic) ? capabilitiesVersion; // ivar: _capabilitiesVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *devicesCapabilities; // ivar: _devicesCapabilities
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger inUseState; // ivar: _inUseState
@property (readonly) Class superclass;
@property (readonly) BOOL userDisabled; // ivar: _userDisabled


+(id)capabilitiesForCurrentDevice;
-(id)dictionaryRepresentation;
-(id)initWithCapabilitiesVersion:(struct ? )arg0 devicesCapabilities:(id)arg1 userDisabled:(BOOL)arg2 inUseState:(NSUInteger)arg3 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;


@end


#endif