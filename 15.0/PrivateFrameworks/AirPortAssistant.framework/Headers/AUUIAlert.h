// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AUUIALERT_H
#define AUUIALERT_H

@class UIAlertAction, NSString;
@protocol UIAlertViewDelegate, AUUIAlertDelegate;

#import <Foundation/Foundation.h>


@interface AUUIAlert : NSObject <UIAlertViewDelegate>

 {
    BOOL prepared;
    NSInteger okButtonIndex;
    NSInteger cancelButtonIndex;
    NSInteger alternateButtonIndex;
    NSInteger destructiveButtonIndex;
}


@property (retain, nonatomic) id *alert; // ivar: alert
@property (retain, nonatomic) UIAlertAction *alternateAction; // ivar: alternateAction
@property (retain, nonatomic) NSString *alternateButtonTitle; // ivar: alternateButtonTitle
@property (retain, nonatomic) UIAlertAction *cancelAction; // ivar: cancelAction
@property (retain, nonatomic) NSString *cancelButtonTitle; // ivar: cancelButtonTitle
@property (retain, nonatomic) id *context; // ivar: context
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<AUUIAlertDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIAlertAction *destructiveAction; // ivar: destructiveAction
@property (retain, nonatomic) NSString *destructiveButtonTitle; // ivar: destructiveButtonTitle
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *message; // ivar: message
@property (retain, nonatomic) UIAlertAction *okAction; // ivar: okAction
@property (retain, nonatomic) NSString *okButtonTitle; // ivar: okButtonTitle
@property (nonatomic) BOOL stackButtons; // ivar: stackButtons
@property (readonly) Class superclass;
@property (nonatomic) NSInteger tag; // ivar: tag
@property (retain, nonatomic) NSString *title; // ivar: title
@property (retain, nonatomic) id *viewController; // ivar: viewController


-(BOOL)alertViewShouldEnableFirstOtherButton:(id)arg0 ;
-(id)initWithViewController:(id)arg0 ;
-(id)initWithViewController:(id)arg0 actionSheet:(BOOL)arg1 ;
-(void)alertView:(id)arg0 didDismissWithButtonIndex:(NSInteger)arg1 ;
-(void)applicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)dealloc;
-(void)dismissWithCancelActionAnimated:(BOOL)arg0 ;
-(void)dismissWithNoActionAnimated:(BOOL)arg0 ;
-(void)dismissWithOKActionAnimated:(BOOL)arg0 ;
-(void)enableAlternateAction:(BOOL)arg0 ;
-(void)enableCancelAction:(BOOL)arg0 ;
-(void)enableDestructiveAction:(BOOL)arg0 ;
-(void)enableOKAction:(BOOL)arg0 ;
-(void)prepareToShow;
-(void)show;


@end


#endif