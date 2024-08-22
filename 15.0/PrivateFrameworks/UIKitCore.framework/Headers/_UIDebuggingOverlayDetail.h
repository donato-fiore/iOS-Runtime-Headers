// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDEBUGGINGOVERLAYDETAIL_H
#define _UIDEBUGGINGOVERLAYDETAIL_H

@class NSString;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "UIViewController.h"

@interface _UIDebuggingOverlayDetail : NSObject

@property (nonatomic) NSInteger accessoryType; // ivar: _accessoryType
@property (retain, nonatomic) NSString *detail; // ivar: _detail
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) UIViewController *viewController;


+(id)detailWithTitle:(id)arg0 detail:(id)arg1 ;
-(void)_updateForInspectedView:(id)arg0 ;


@end


#endif