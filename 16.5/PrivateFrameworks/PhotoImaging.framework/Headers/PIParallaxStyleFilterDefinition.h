// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIPARALLAXSTYLEFILTERDEFINITION_H
#define PIPARALLAXSTYLEFILTERDEFINITION_H

@class NSString, NSDictionary;


#import "PIParallaxStyleDefinition.h"

@interface PIParallaxStyleFilterDefinition : PIParallaxStyleDefinition

@property (readonly, copy, nonatomic) NSString *filterName; // ivar: _filterName
@property (readonly, copy, nonatomic) NSDictionary *parameters; // ivar: _parameters


-(BOOL)isEqualToParallaxStyleDefinition:(id)arg0 ;
-(BOOL)isEqualToParallaxStyleFilterDefinition:(id)arg0 ;
-(id)description;
-(id)evaluateWithContext:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithFilterName:(id)arg0 parameters:(id)arg1 ;
-(id)type;


@end


#endif