// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUITRANSACTIONBUTTON_H
#define VUITRANSACTIONBUTTON_H

@class NSString;


#import "VUIButton.h"
#import "VUICircularProgress.h"

@interface VUITransactionButton : VUIButton

@property (nonatomic) BOOL monitorTransaction; // ivar: _monitorTransaction
@property (retain, nonatomic) VUICircularProgress *progressIndicator; // ivar: _progressIndicator
@property (copy, nonatomic) NSString *textContentTitleBackup; // ivar: _textContentTitleBackup
@property (copy, nonatomic) NSString *transactionID; // ivar: _transactionID
@property (nonatomic, getter=isWaitingForTransactionToStart) BOOL waitingForTransactionToStart; // ivar: _waitingForTransactionToStart


-(id)_carouselView;
-(id)initWithType:(NSUInteger)arg0 interfaceStyle:(NSUInteger)arg1 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)_addProgressIndicatorWithFrame:(struct CGRect )arg0 ;
-(void)_buttonTapped:(id)arg0 eventName:(id)arg1 ;
-(void)_handleTransactionDidFinishNotification:(id)arg0 ;
-(void)_handleTransactionDidStartNotification:(id)arg0 ;
-(void)_layoutProgressIndicatorIfNeeded;
-(void)_registerForTransactionNotification;
-(void)_startListeningForTransactionWithTransactionID:(id)arg0 ;
-(void)_unregisterTransactionNotifications;
-(void)_updateProgressIndicatorTintColor:(id)arg0 ;
-(void)dealloc;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)vui_traitCollectionDidChange:(id)arg0 ;


@end


#endif