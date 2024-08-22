// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTMATERIAL_H
#define AVTMATERIAL_H

@class NSDictionary, UIColor;

#import <Foundation/Foundation.h>


@interface AVTMaterial : NSObject

@property (retain, nonatomic) NSDictionary *additionalPropertyColors; // ivar: _additionalPropertyColors
@property (retain, nonatomic) UIColor *baseColor; // ivar: _baseColor


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)applyToSceneKitMaterial:(id)arg0 ;


@end


#endif