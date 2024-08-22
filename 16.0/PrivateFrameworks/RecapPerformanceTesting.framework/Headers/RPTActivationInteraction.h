// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPTACTIVATIONINTERACTION_H
#define RPTACTIVATIONINTERACTION_H

@class UIWindow;
@protocol RPTInteraction;

#import <Foundation/Foundation.h>


@interface RPTActivationInteraction : NSObject <RPTInteraction>



@property (nonatomic) NSUInteger action; // ivar: _action
@property (retain, nonatomic) UIWindow *window; // ivar: _window


-(id)initForAction:(NSUInteger)arg0 window:(id)arg1 ;
-(void)invokeWithComposer:(id)arg0 duration:(CGFloat)arg1 ;


@end


#endif