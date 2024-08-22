// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTMESSAGESCONTENTBASEVIEWCONTROLLER_H
#define PKPEERPAYMENTMESSAGESCONTENTBASEVIEWCONTROLLER_H

@class UIViewController, PKPeerPaymentMessagesAppViewController, NSString;
@protocol PKPeerPaymentMessagesContentProtocol;


#import "PKPeerPaymentMessagesContentView.h"

@interface PKPeerPaymentMessagesContentBaseViewController : UIViewController <PKPeerPaymentMessagesContentProtocol>



@property (readonly, weak, nonatomic) PKPeerPaymentMessagesAppViewController *appController; // ivar: _appController
@property (readonly, nonatomic) PKPeerPaymentMessagesContentView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithMessagesAppController:(id)arg0 ;
-(void)loadView;
-(void)reloadContent;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif