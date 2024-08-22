// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXSCALABLEIMAGECOMPONENT_H
#define SXSCALABLEIMAGECOMPONENT_H

@class NSString;


#import "SXComponent.h"
#import "SXFormattedText.h"

@interface SXScalableImageComponent : SXComponent

@property (readonly, nonatomic) NSString *accessibilityCaption;
@property (readonly, nonatomic) NSString *caption;
@property (readonly, nonatomic) SXFormattedText *captionComponent;
@property (readonly, nonatomic) NSString *imageIdentifier;
@property (readonly, nonatomic) BOOL userControllable;


+(id)typeString;
-(NSUInteger)traits;


@end


#endif