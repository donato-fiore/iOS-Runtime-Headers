// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIREDEEMIDVIEWCONTROLLER_H
#define SKUIREDEEMIDVIEWCONTROLLER_H

@class UIViewController, NSString, NSMutableDictionary, UIBarButtonItem, UITableView;
@protocol SKUIRedeemIdManagerDelegate, SKUIRedeemIdDelegate;


#import "SKUIClientContext.h"
#import "SKUIRedeemIdManager.h"

@interface SKUIRedeemIdViewController : UIViewController <SKUIRedeemIdManagerDelegate>



@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIRedeemIdDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *fields; // ivar: _fields
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKUIRedeemIdManager *manager; // ivar: _manager
@property (retain, nonatomic) UIBarButtonItem *nextButton; // ivar: _nextButton
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)_validateForm;
-(id)_fieldForIndexPath:(id)arg0 ;
-(id)_finalOutputFields;
-(id)initWithClientContext:(id)arg0 ;
-(struct UIEdgeInsets )_edgeInsetsFromInsets:(struct UIEdgeInsets )arg0 usingNewTopInset:(CGFloat)arg1 ;
-(void)_adjustInsetsForKeyboardFrameValue:(id)arg0 ;
-(void)_cancelPressed;
-(void)_initializeManager;
-(void)_initializeNavigationItem;
-(void)_initializeTableView;
-(void)_keyboardDidHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_nextPressed;
-(void)_refreshNavigationItem;
-(void)_reloadFooter;
-(void)_subscribeToKeyboardEvents;
-(void)_updateFieldAtIndexPath:(id)arg0 withText:(id)arg1 ;
-(void)redeemIdManager:(id)arg0 didChangeToText:(id)arg1 forCellAtIndexPath:(id)arg2 ;
-(void)redeemIdManager:(id)arg0 didReturnText:(id)arg1 forCellAtIndexPath:(id)arg2 ;
-(void)redeemIdManager:(id)arg0 movedToRowAtIndexPath:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif