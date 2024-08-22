// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKABSTRACTALERT_H
#define TSKABSTRACTALERT_H

@protocol TSKUIAlertProtocol;

#import <Foundation/Foundation.h>


@interface TSKAbstractAlert : NSObject {
    NSInteger _result;
    BOOL _isDelegateRetained;
    BOOL _clickedButtonAtIndex;
    BOOL _didDismissWithButtonIndex;
    BOOL _willDismissWithButtonIndex;
    BOOL _didPresentAlertView;
    BOOL _willPresentAlertView;
    id *_clickedBlock;
    id *_dismissedBlock;
}


@property (nonatomic) NSInteger cancelButtonIndex;
@property (nonatomic) BOOL cancelOnEnterBackground; // ivar: _cancelOnEnterBackground
@property (retain, nonatomic) id *context; // ivar: _context
@property (nonatomic) NSObject<TSKUIAlertProtocol> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL inBackground; // ivar: _inBackground
@property (retain, nonatomic) NSObject<TSKUIAlertProtocol> *retainedDelegate; // ivar: _retainedDelegate


-(NSInteger)addButtonWithTitle:(id)arg0 ;
-(NSInteger)firstOtherButtonIndex;
-(NSInteger)numberOfButtons;
-(NSInteger)result;
-(NSInteger)showSynchronously;
-(id)buttonTitleAtIndex:(NSInteger)arg0 ;
-(id)init;
-(void)_didPresentAlertView:(id)arg0 ;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)applicationWillEnterForeground:(id)arg0 ;
-(void)clickedButtonAtIndex:(NSInteger)arg0 ;
-(void)dealloc;
-(void)didDismissWithButtonIndex:(NSInteger)arg0 ;
-(void)dismissWithClickedButtonIndex:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)enterBackground;
-(void)show;
-(void)showAlert;
-(void)showWithClickedButtonBlock:(id)arg0 ;
-(void)showWithDelegate:(id)arg0 context:(id)arg1 ;
-(void)showWithDismissedByButtonBlock:(id)arg0 ;
-(void)willDismissWithButtonIndex:(NSInteger)arg0 ;
-(void)willPresentAlertView;


@end


#endif