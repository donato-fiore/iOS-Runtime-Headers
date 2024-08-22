// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TDCOLORPROPERTY_H
#define TDCOLORPROPERTY_H



#import "TDProperty.h"

@interface TDColorProperty : TDProperty {
    float _red;
    float _green;
    float _blue;
    float _alpha;
}


@property (nonatomic) float alpha;
@property (nonatomic) float blue;
@property (nonatomic) float green;
@property (nonatomic) float red;


-(void)addToDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif