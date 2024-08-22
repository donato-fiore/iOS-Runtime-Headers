// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIGRAVITYWELLADAPTORINTERACTION_H
#define _UIGRAVITYWELLADAPTORINTERACTION_H

@class NSString;
@protocol UIInteraction;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface _UIGravityWellAdaptorInteraction : NSObject <UIInteraction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


-(void)didMoveToView:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif