// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUICODEENTRYVIEWCONTROLLER_H
#define AAUICODEENTRYVIEWCONTROLLER_H

@class DevicePINController, NSString;
@protocol DevicePINControllerDelegate;


#import "AAUICodeEntryContext.h"

@interface AAUICodeEntryViewController : DevicePINController <DevicePINControllerDelegate>

 {
    NSString *_pinInstructions;
}


@property (retain, nonatomic) AAUICodeEntryContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)showSimplePINCancelButtonOnLeft;
-(BOOL)simplePIN;
-(BOOL)validatePIN:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)pinInstructionsPrompt;
-(id)stringsBundle;
-(struct CGSize )preferredContentSize;
-(void)_disableUserInteractionAndStartSpinner;
-(void)_enableUserInteractionAndStopSpinner;
-(void)_showIncorrectCodeAlert;
-(void)didAcceptEnteredPIN:(id)arg0 ;
-(void)didCancelEnteringPIN;
-(void)setPane:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif