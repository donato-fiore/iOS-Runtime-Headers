// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSSCREENCAPTUREABILITYCHECK_H
#define SSSCREENCAPTUREABILITYCHECK_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SSScreenCaptureAbilityCheck : NSObject

@property (nonatomic) BOOL isAbleToTakeScreenshots; // ivar: _isAbleToTakeScreenshots
@property (copy, nonatomic) NSString *reasonForNotBeingAbleToTakeScreenshots; // ivar: _reasonForNotBeingAbleToTakeScreenshots


+(id)abilityCheck;


@end


#endif