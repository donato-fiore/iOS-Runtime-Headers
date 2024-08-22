// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXASSISTANTSTEPCONTEXT_H
#define PXASSISTANTSTEPCONTEXT_H

@class NSString, UIViewController;


#import "PXObservable.h"

@interface PXAssistantStepContext : PXObservable

@property (readonly, copy, nonatomic) NSString *customSecondButtonTitle; // ivar: _customSecondButtonTitle
@property (readonly, nonatomic) BOOL firstButtonEnabled; // ivar: _firstButtonEnabled
@property (readonly, copy, nonatomic) NSString *firstButtonTitle; // ivar: _firstButtonTitle
@property (readonly, nonatomic) NSInteger firstButtonType; // ivar: _firstButtonType
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL secondButtonEnabled; // ivar: _secondButtonEnabled
@property (readonly, nonatomic) NSInteger secondButtonType; // ivar: _secondButtonType
@property (readonly, nonatomic) BOOL useTransparentBarAppearance; // ivar: _useTransparentBarAppearance
@property (readonly, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)init;
-(id)initWithIdentifier:(id)arg0 viewController:(id)arg1 ;
-(void)performChanges:(id)arg0 ;


@end


#endif