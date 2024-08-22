// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXIMAGECOMPONENT_H
#define SXIMAGECOMPONENT_H

@class NSString, NSAttributedString;


#import "SXComponent.h"

@interface SXImageComponent : SXComponent

@property (readonly, nonatomic) NSString *accessibilityCaption;
@property (readonly, nonatomic) NSString *caption;
@property (readonly, nonatomic) NSAttributedString *captionWithLocalizedRoleForSpeaking;
@property (readonly, nonatomic) NSString *imageIdentifier;
@property (readonly, nonatomic) BOOL shouldBeExposedToAssistiveTechnology;
@property (readonly, nonatomic) BOOL userControllable;


+(id)typeString;
-(NSUInteger)traits;


@end


#endif