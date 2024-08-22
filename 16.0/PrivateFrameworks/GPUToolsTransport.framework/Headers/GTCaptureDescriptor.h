// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GTCAPTUREDESCRIPTOR_H
#define GTCAPTUREDESCRIPTOR_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GTCapturableObject.h"

@interface GTCaptureDescriptor : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger captureMode; // ivar: _captureMode
@property (nonatomic) BOOL ignoreUnusedResources; // ivar: _ignoreUnusedResources
@property (retain, nonatomic) GTCapturableObject *objectToCapture; // ivar: _objectToCapture
@property (nonatomic) BOOL suspendAfterCapture; // ivar: _suspendAfterCapture
@property (nonatomic) NSUInteger triggerHitsToEnd; // ivar: _triggerHitsToEnd
@property (nonatomic) NSUInteger triggerHitsToStart; // ivar: _triggerHitsToStart


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif