// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSHARINGMESSAGEEXTENSIONOPENGRAPHPRESENTER_H
#define PKSHARINGMESSAGEEXTENSIONOPENGRAPHPRESENTER_H

@class NSString;
@protocol PKSharingMessageExtensionPresenter, PKPaymentWebServiceTargetDeviceProtocol, PKPassLibraryDataProvider, PKSharingMessageExtensionMessage, PKSharingMessageExtensionRenderer;

#import <Foundation/Foundation.h>

#import "PKSharingMessageExtensionOpenGraphMessage.h"

@interface PKSharingMessageExtensionOpenGraphPresenter : NSObject <PKSharingMessageExtensionPresenter>

 {
    id<PKPaymentWebServiceTargetDeviceProtocol> *_targetDevice;
    id<PKPassLibraryDataProvider> *_passLibrary;
    PKSharingMessageExtensionOpenGraphMessage *_message;
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