// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKPLACEACTIONBUTTONCONTROLLER_H
#define _MKPLACEACTIONBUTTONCONTROLLER_H

@class NSString;
@protocol _MKInfoCardChildViewControllerAnalyticsDelegate, _MKPlaceActionControlledButton;

#import <Foundation/Foundation.h>


@interface _MKPlaceActionButtonController : NSObject <_MKInfoCardChildViewControllerAnalyticsDelegate>



@property (readonly, nonatomic) int analyticsAction; // ivar: _analyticsAction
@property (readonly, nonatomic) id *buttonSelectedBlock; // ivar: _buttonSelectedBlock
@property (readonly, nonatomic) NSString *buttonSubTitle; // ivar: _buttonSubTitle
@property (readonly, nonatomic) NSString *buttonTitle; // ivar: _buttonTitle
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_MKPlaceActionControlledButton> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disabled; // ivar: _disabled
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *symbolName; // ivar: _symbolName


+(id)actionButtonControllerWithTitle:(id)arg0 subTitle:(id)arg1 selectedBlock:(id)arg2 ;
// +(id)actionButtonControllerWithTitle:(id)arg0 subTitle:(id)arg1 selectedBlock:(id)arg2 disabled:(unk)arg3 symbolName:(BOOL)arg4  ;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
// -(id)initWithTitle:(id)arg0 subTitle:(id)arg1 analyticsAction:(int)arg2 selectedBlock:(id)arg3 disabled:(unk)arg4 symbolName:(BOOL)arg5  ;
-(id)initWithTitle:(id)arg0 subTitle:(id)arg1 selectedBlock:(id)arg2 ;
-(void)buttonTextChanged;


@end


#endif