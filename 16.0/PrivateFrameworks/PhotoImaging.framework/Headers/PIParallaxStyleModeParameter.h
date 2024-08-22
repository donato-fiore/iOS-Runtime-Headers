// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIPARALLAXSTYLEMODEPARAMETER_H
#define PIPARALLAXSTYLEMODEPARAMETER_H

@class NSString;


#import "PIParallaxStyleParameter.h"

@interface PIParallaxStyleModeParameter : PIParallaxStyleParameter

@property (readonly, copy, nonatomic) NSString *modeValue; // ivar: _modeValue


-(BOOL)isEqualToParallaxStyleParameter:(id)arg0 ;
-(id)description;
-(id)evaluateWithContext:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithMode:(id)arg0 ;
-(id)type;


@end


#endif