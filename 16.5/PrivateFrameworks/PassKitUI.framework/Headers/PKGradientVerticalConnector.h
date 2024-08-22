// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKGRADIENTVERTICALCONNECTOR_H
#define PKGRADIENTVERTICALCONNECTOR_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface PKGradientVerticalConnector : NSObject

@property (readonly, nonatomic) UIColor *bottomGradientColor; // ivar: _bottomGradientColor
@property (readonly, nonatomic) UIColor *topGradientColor; // ivar: _topGradientColor


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithTopGradientColor:(id)arg0 bottomGradientColor:(id)arg1 ;


@end


#endif