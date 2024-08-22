// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITEXTSERVICESESSION_H
#define _UITEXTSERVICESESSION_H

@class NSString;
@protocol UIPopoverPresentationControllerDelegate;

#import <Foundation/Foundation.h>

#import "UIViewController.h"
#import "UIView.h"
#import "UIResponder.h"
#import "UIKeyboardSceneDelegate.h"

@interface _UITextServiceSession : NSObject <UIPopoverPresentationControllerDelegate>

 {
    NSInteger _type;
    UIViewController *_modalViewController;
    UIView *_contextView;
    UIResponder *_pinnedResponder;
    UIKeyboardSceneDelegate *_keyboardSceneDelegate;
    BOOL _dismissed;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissedHandler; // ivar: _dismissedHandler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_canShowTextServiceForType:(NSInteger)arg0 ;
+(BOOL)_canShowTextServices;
+(BOOL)shouldPresentServiceInSameWindowAsView:(id)arg0 ;
+(BOOL)textServiceIsDisplaying;
+(NSInteger)availableTextServices;
+(id)showServiceForText:(id)arg0 selectedTextRange:(struct _NSRange )arg1 type:(NSInteger)arg2 fromRect:(struct CGRect )arg3 inView:(id)arg4 ;
+(id)showServiceForText:(id)arg0 type:(NSInteger)arg1 fromRect:(struct CGRect )arg2 inView:(id)arg3 ;
+(id)showServiceForType:(NSInteger)arg0 withContext:(id)arg1 ;
+(id)textServiceSessionForType:(NSInteger)arg0 ;
-(BOOL)isDisplaying;
-(NSInteger)type;
-(id)init;
-(id)initWithType:(NSInteger)arg0 ;
-(void)_endSession;
-(void)dismissTextServiceAnimated:(BOOL)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)sessionDidDismiss;


@end


#endif