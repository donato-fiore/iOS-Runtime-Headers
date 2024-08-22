// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIMUTABLESTATUSBARSTYLEREQUEST_H
#define UIMUTABLESTATUSBARSTYLEREQUEST_H

@class NSNumber;


#import "UIStatusBarStyleRequest.h"
#import "UIColor.h"

@interface UIMutableStatusBarStyleRequest : UIStatusBarStyleRequest

@property (nonatomic) CGFloat foregroundAlpha;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (nonatomic) NSInteger legibilityStyle;
@property (retain, nonatomic) NSNumber *overrideHeight;
@property (nonatomic) NSInteger style;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif