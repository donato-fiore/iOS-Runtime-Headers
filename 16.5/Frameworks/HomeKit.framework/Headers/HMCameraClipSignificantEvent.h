// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMCAMERACLIPSIGNIFICANTEVENT_H
#define HMCAMERACLIPSIGNIFICANTEVENT_H

@class NSUUID;


#import "HMCameraSignificantEvent.h"

@interface HMCameraClipSignificantEvent : HMCameraSignificantEvent

@property (readonly, copy) NSUUID *clipUUID; // ivar: _clipUUID
@property (readonly) CGFloat timeOffsetWithinClip; // ivar: _timeOffsetWithinClip


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUniqueIdentifier:(id)arg0 reason:(NSUInteger)arg1 dateOfOccurrence:(id)arg2 confidenceLevel:(NSUInteger)arg3 cameraProfileUUID:(id)arg4 faceClassification:(id)arg5 timeOffsetWithinClip:(CGFloat)arg6 clipUUID:(id)arg7 ;
-(id)initWithUniqueIdentifier:(id)arg0 reason:(NSUInteger)arg1 dateOfOccurrence:(id)arg2 confidenceLevel:(NSUInteger)arg3 faceClassification:(id)arg4 timeOffsetWithinClip:(CGFloat)arg5 clipUUID:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif