// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITOOLTIPINTERACTIONSTYLE_H
#define _UITOOLTIPINTERACTIONSTYLE_H

@protocol _UIVisualStyleProviding, UIToolTipProvider;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface _UIToolTipInteractionStyle : NSObject <_UIVisualStyleProviding>



@property (readonly, weak, nonatomic) NSObject<UIToolTipProvider> *provider; // ivar: _provider
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


-(id)initWithView:(id)arg0 provider:(id)arg1 ;


@end


#endif