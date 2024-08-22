// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTATUSCONTROLLER_H
#define PXSTATUSCONTROLLER_H

@class UIAlertController, UIContentUnavailableConfiguration, NSString;
@protocol PXChangeObserver, PXStatusControllerDelegate;

#import <Foundation/Foundation.h>

#import "PXStatusViewModel.h"

@interface PXStatusController : NSObject <PXChangeObserver>



@property (retain, nonatomic) UIAlertController *alertController; // ivar: _alertController
@property (readonly, nonatomic) UIContentUnavailableConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXStatusControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) PXStatusViewModel *viewModel; // ivar: _viewModel


-(id)init;
-(void)_handleButtonAction:(id)arg0 ;
-(void)_updateButtonTitle;
-(void)_updateMessage;
-(void)_updateTitle;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif