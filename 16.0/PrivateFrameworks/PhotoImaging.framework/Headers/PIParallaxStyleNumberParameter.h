// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIPARALLAXSTYLENUMBERPARAMETER_H
#define PIPARALLAXSTYLENUMBERPARAMETER_H

@class NSNumber, NSString;


#import "PIParallaxStyleParameter.h"

@interface PIParallaxStyleNumberParameter : PIParallaxStyleParameter

@property (readonly, nonatomic) NSNumber *numberValue; // ivar: _numberValue
@property (readonly, nonatomic) NSString *unit; // ivar: _unit


-(BOOL)isEqualToParallaxStyleParameter:(id)arg0 ;
-(id)description;
-(id)evaluateWithContext:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithNumber:(id)arg0 ;
-(id)initWithNumber:(id)arg0 unit:(id)arg1 ;
-(id)type;


@end


#endif