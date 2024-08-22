// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIPARALLAXSTYLEFILTERSTACKDEFINITION_H
#define PIPARALLAXSTYLEFILTERSTACKDEFINITION_H

@class NSArray, NSString;


#import "PIParallaxStyleDefinition.h"

@interface PIParallaxStyleFilterStackDefinition : PIParallaxStyleDefinition

@property (readonly, copy, nonatomic) NSArray *filters; // ivar: _filters
@property (readonly, copy, nonatomic) NSString *stackName; // ivar: _stackName


-(BOOL)isEqualToParallaxStyleDefinition:(id)arg0 ;
-(BOOL)isEqualToParallaxStyleFilterStackDefinition:(id)arg0 ;
-(id)description;
-(id)evaluateWithContext:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithStackName:(id)arg0 filters:(id)arg1 ;
-(id)type;


@end


#endif