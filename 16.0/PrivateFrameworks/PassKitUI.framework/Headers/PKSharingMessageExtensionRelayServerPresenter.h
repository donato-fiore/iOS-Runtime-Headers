// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSHARINGMESSAGEEXTENSIONRELAYSERVERPRESENTER_H
#define PKSHARINGMESSAGEEXTENSIONRELAYSERVERPRESENTER_H

@class PKIDSIDQueryManager, NSString;
@protocol PKSharingMessageExtensionPresenter, PKPaymentWebServiceTargetDeviceProtocol, PKPassLibraryDataProvider, PKSharingMessageExtensionMessage, PKSharingMessageExtensionRenderer;

#import <Foundation/Foundation.h>

#import "PKSharingMessageExtensionRelayServerMessage.h"

@interface PKSharingMessageExtensionRelayServerPresenter : NSObject <PKSharingMessageExtensionPresenter>

 {
    id<PKPaymentWebServiceTargetDeviceProtocol> *_targetDevice;
    id<PKPassLibraryDataProvider> *_passLibrary;
    PKSharingMessageExtensionRelayServerMessage *_message;
    PKIDSIDQueryManager *_idsManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<PKSharingMessageExtensionMessage> *message;
@property (weak, nonatomic) NSObject<PKSharingMessageExtensionRenderer> *renderer; // ivar: _renderer
@property (readonly) Class superclass;


+(id)propertiesForMessage:(id)arg0 ;
-(id)initWithTargetDevice:(id)arg0 passLibrary:(id)arg1 ;
-(void)didTapMessage;
-(void)extensionWillAppear;
-(void)validateForRecipients:(id)arg0 senderAddress:(id)arg1 completion:(id)arg2 ;


@end


#endif