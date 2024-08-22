// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIBUTTONBARTARGETACTION_H
#define _UIBUTTONBARTARGETACTION_H


#import <Foundation/Foundation.h>

#import "UIBarButtonItem.h"

@interface _UIButtonBarTargetAction : NSObject

@property (copy, nonatomic) id *actionFilter; // ivar: _actionFilter
@property (readonly, nonatomic) UIBarButtonItem *barButtonItem; // ivar: _barButtonItem
@property (readonly, nonatomic) SEL proxyAction;


-(id)init;
-(id)initWithBarButtonItem:(id)arg0 ;
-(void)_invoke:(id)arg0 forEvent:(id)arg1 ;


@end


#endif