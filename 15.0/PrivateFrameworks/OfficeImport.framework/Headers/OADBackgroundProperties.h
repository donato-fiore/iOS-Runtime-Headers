// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADBACKGROUNDPROPERTIES_H
#define OADBACKGROUNDPROPERTIES_H

@class NSArray;


#import "OADBackground.h"
#import "OADFill.h"

@interface OADBackgroundProperties : OADBackground {
    OADFill *mFill;
    NSArray *mEffects;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)effects;
-(id)fill;
-(void)setEffects:(id)arg0 ;
-(void)setFill:(id)arg0 ;


@end


#endif