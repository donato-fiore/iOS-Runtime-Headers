// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLDETAILITEMVIEWCONTROLLERSTATE_H
#define QLDETAILITEMVIEWCONTROLLERSTATE_H

@class NSString, UIView;

#import <Foundation/Foundation.h>


@interface QLDetailItemViewControllerState : NSObject

@property (retain) NSString *actionButtonTitle; // ivar: _actionButtonTitle
@property (retain) UIView *actionButtonView; // ivar: _actionButtonView
@property (getter=isInformationVisible) BOOL informationVisible; // ivar: _informationVisible


+(id)detailItemViewControllerStateWithActionButtonTitle:(id)arg0 actionButtonView:(id)arg1 informationVisible:(BOOL)arg2 ;


@end


#endif