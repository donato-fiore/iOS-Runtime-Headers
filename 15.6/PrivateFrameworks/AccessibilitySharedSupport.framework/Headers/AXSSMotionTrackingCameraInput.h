// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXSSMOTIONTRACKINGCAMERAINPUT_H
#define AXSSMOTIONTRACKINGCAMERAINPUT_H

@class NSString;


#import "AXSSMotionTrackingInput.h"

@interface AXSSMotionTrackingCameraInput : AXSSMotionTrackingInput

@property (copy, nonatomic) NSString *captureDeviceUniqueID; // ivar: _captureDeviceUniqueID
@property (nonatomic) BOOL isBuiltIn; // ivar: _isBuiltIn
@property (copy, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
+(id)captureDeviceForMotionTrackingInput:(id)arg0 ;
+(id)motionTrackingCameraInputWithAVCaptureDevice:(id)arg0 ;
-(BOOL)isCamera;
-(BOOL)supportsExpressions;
-(NSUInteger)trackingType;
-(id)description;
-(id)initWithCaptureDeviceUniqueID:(id)arg0 name:(id)arg1 isBuiltIn:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlistDictionary:(id)arg0 ;
-(id)plistDictionary;
-(id)uniqueIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif