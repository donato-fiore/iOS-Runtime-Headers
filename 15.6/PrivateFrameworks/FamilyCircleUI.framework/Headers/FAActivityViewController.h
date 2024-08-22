// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FAACTIVITYVIEWCONTROLLER_H
#define FAACTIVITYVIEWCONTROLLER_H

@class UIActivityViewController, NSString, NSArray;
@protocol MFMessageComposeViewControllerInternalDelegate, MFMailComposeViewControllerDelegate, UIActivityViewControllerAirDropDelegate, UIActivityItemSource, FAActivityViewControllerDelegate;



@interface FAActivityViewController : UIActivityViewController <MFMessageComposeViewControllerInternalDelegate, MFMailComposeViewControllerDelegate, UIActivityViewControllerAirDropDelegate>

 {
    id<UIActivityItemSource> *_itemSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FAActivityViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didCompleteAirdropTransfer; // ivar: _didCompleteAirdropTransfer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *recipientAddresses; // ivar: _recipientAddresses
@property (readonly) Class superclass;


-(id)_parseRecipientAddresses:(id)arg0 ;
-(id)_recipientAlreadyInFamily:(id)arg0 emailOnly:(BOOL)arg1 ;
-(id)initWithItemSource:(id)arg0 ;
-(void)_prepareActivity:(id)arg0 completion:(id)arg1 ;
-(void)_showAlreadyFamilyMember:(id)arg0 ;
-(void)activityViewControllerDidFinishAirdropTransfer:(id)arg0 ;
-(void)mailComposeController:(id)arg0 didFinishWithResult:(NSInteger)arg1 error:(id)arg2 ;
-(void)mailComposeController:(id)arg0 shouldSendMail:(id)arg1 toRecipients:(id)arg2 completion:(id)arg3 ;
-(void)messageComposeViewController:(id)arg0 didFinishWithResult:(NSInteger)arg1 ;
-(void)messageComposeViewController:(id)arg0 shouldSendMessage:(id)arg1 toRecipients:(id)arg2 completion:(id)arg3 ;


@end


#endif