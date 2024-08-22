// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKINTERCEPTABLEACTIVITYVIEWCONTROLLER_H
#define PKINTERCEPTABLEACTIVITYVIEWCONTROLLER_H

@class UIActivityViewController, UIActivity, NSString, NSArray;
@protocol UIActivityViewControllerAirDropDelegate, PKInterceptableActivityViewControllerDelegate;



@interface PKInterceptableActivityViewController : UIActivityViewController <UIActivityViewControllerAirDropDelegate>

 {
    UIActivity *_defferedActivity;
    BOOL _isSendingOverAirdrop;
    NSString *_airdropRecipientName;
}


@property (retain, nonatomic) NSArray *allowedActivityTypes;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKInterceptableActivityViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithItems:(id)arg0 delegate:(id)arg1 ;
-(id)initWithItems:(id)arg0 peopleSuggestionBundleIds:(id)arg1 delegate:(id)arg2 ;
-(id)selectedRecipient;
-(void)_performActivity:(id)arg0 ;
-(void)activityViewController:(id)arg0 willStartAirdropTransferToRecipient:(id)arg1 ;
-(void)activityViewControllerDidFinishAirdropTransfer:(id)arg0 ;
-(void)activityViewControllerWillStartAirdropTransfer:(id)arg0 ;
-(void)handleInterceptedShareActivity;
-(void)loadView;
-(void)setExcludedActivityTypes:(id)arg0 ;
-(void)setItems:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif