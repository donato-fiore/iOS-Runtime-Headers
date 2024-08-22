// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSUISAFARISANDBOXBROKER_H
#define WBSUISAFARISANDBOXBROKER_H

@class WBSSafariSandboxBroker;
@protocol WBSUISafariSandboxBrokerProtocol;



@interface WBSUISafariSandboxBroker : WBSSafariSandboxBroker <WBSUISafariSandboxBrokerProtocol>





-(void)getLinkMetadataForMessageWithGUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadLinkPresentationMetdataForMessageWithGUID:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif