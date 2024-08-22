// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIOMUTABLEMODELDESCRIPTION_H
#define MIOMUTABLEMODELDESCRIPTION_H

@class NSDictionary;


#import "MIOModelDescription.h"

@interface MIOMutableModelDescription : MIOModelDescription

@property (copy, nonatomic) NSDictionary *metadata;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setShortDescription:(id)arg0 forInputFeatureWithName:(id)arg1 ;
-(void)setShortDescription:(id)arg0 forOutputFeatureWithName:(id)arg1 ;
-(void)setShortDescription:(id)arg0 forTrainingInputFeatureWithName:(id)arg1 ;


@end


#endif