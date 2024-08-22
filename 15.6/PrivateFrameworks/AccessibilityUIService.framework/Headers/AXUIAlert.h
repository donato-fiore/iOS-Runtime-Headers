// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXUIALERT_H
#define AXUIALERT_H

@class UIView, NSDictionary;


#import "AXUIAlertContext.h"

@interface AXUIAlert : UIView

@property (weak, nonatomic) AXUIAlertContext *context; // ivar: _context
@property (retain, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(id)alertWithType:(NSUInteger)arg0 text:(id)arg1 subtitleText:(id)arg2 iconImage:(id)arg3 styleProvider:(id)arg4 userInfo:(id)arg5 ;
-(void)addToContainerView:(id)arg0 ;


@end


#endif