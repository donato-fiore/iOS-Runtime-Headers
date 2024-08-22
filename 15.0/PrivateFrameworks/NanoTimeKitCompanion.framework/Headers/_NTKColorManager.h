// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NTKCOLORMANAGER_H
#define _NTKCOLORMANAGER_H

@class UIColor, CALayer;

#import <Foundation/Foundation.h>


@interface _NTKColorManager : NSObject

@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (readonly, nonatomic) UIColor *contentColor;
@property (retain, nonatomic) CALayer *layer; // ivar: _layer


-(BOOL)shouldAnimatePropertyWithKey:(id)arg0 ;
-(void)_updateFilterColor;


@end


#endif