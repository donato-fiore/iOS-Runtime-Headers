// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFTRAITSORIENTATIONRESOLUTIONPOLICYINFO_H
#define SBFTRAITSORIENTATIONRESOLUTIONPOLICYINFO_H

@class NSArray, NSDictionary, NSString;
@protocol NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "SBFTraitsSettingsActuationContext.h"

@interface SBFTraitsOrientationResolutionPolicyInfo : NSObject <NSCopying, BSDescriptionProviding>



@property (copy, nonatomic) SBFTraitsSettingsActuationContext *actuationContext; // ivar: _actuationContext
@property (readonly, copy, nonatomic) NSArray *associatedDeviceOrientationStateTypes; // ivar: _associatedDeviceOrientationStateTypes
@property (readonly, copy, nonatomic) NSDictionary *associatedDeviceOrientationStateTypesBySupportedOrientationMask; // ivar: _associatedDeviceOrientationStateTypesBySupportedOrientationMask
@property (readonly, copy, nonatomic) NSString *associatedParticipantRole; // ivar: _associatedParticipantRole
@property (readonly, copy, nonatomic) NSString *associatedParticipantUniqueIdentifier; // ivar: _associatedParticipantUniqueIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceResolution; // ivar: _forceResolution
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger resolutionPolicy; // ivar: _resolutionPolicy
@property (readonly) Class superclass;


+(id)resolutionPolicyInfoDeviceOrientationWithStateTypes:(id)arg0 ;
+(id)resolutionPolicyInfoDeviceOrientationWithStateTypesBySupportedOrientationMask:(id)arg0 ;
+(id)resolutionPolicyInfoForAssociatedParticipantWithRole:(id)arg0 ;
+(id)resolutionPolicyInfoForAssociatedParticipantWithUniqueID:(id)arg0 ;
+(id)resolutionPolicyInfoOrientationBelowParticipantWithRole:(id)arg0 ;
+(id)resolutionPolicyInfoOrientationBelowParticipantWithUniqueID:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithResolutionPolicy:(NSInteger)arg0 ;
-(id)initWithResolutionPolicy:(NSInteger)arg0 associatedAccStateTypes:(id)arg1 ;
-(id)initWithResolutionPolicy:(NSInteger)arg0 associatedAccStateTypesByMask:(id)arg1 ;
-(id)initWithResolutionPolicy:(NSInteger)arg0 associatedParticipantRole:(id)arg1 ;
-(id)initWithResolutionPolicy:(NSInteger)arg0 associatedParticipantUniqueID:(id)arg1 ;
-(id)initWithResolutionPolicy:(NSInteger)arg0 associatedParticipantUniqueID:(id)arg1 associatedParticipantRole:(id)arg2 associatedAccStateTypes:(id)arg3 ;
-(id)initWithResolutionPolicy:(NSInteger)arg0 associatedParticipantUniqueID:(id)arg1 associatedParticipantRole:(id)arg2 associatedAccStateTypes:(id)arg3 associatedAccStateTypesByMask:(id)arg4 ;
-(id)initWithResolutionPolicyInfo:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif