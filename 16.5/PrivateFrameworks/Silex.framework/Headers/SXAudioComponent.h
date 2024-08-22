// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXAUDIOCOMPONENT_H
#define SXAUDIOCOMPONENT_H

@class NSString;


#import "SXComponent.h"

@interface SXAudioComponent : SXComponent

@property (readonly, nonatomic) NSString *accessibilityCaption;
@property (readonly, nonatomic) NSString *caption;
@property (readonly, nonatomic) NSString *resourceIdentifier;
@property (readonly, nonatomic) NSString *stillImageIdentifier;


+(id)typeString;
-(NSUInteger)traits;


@end


#endif