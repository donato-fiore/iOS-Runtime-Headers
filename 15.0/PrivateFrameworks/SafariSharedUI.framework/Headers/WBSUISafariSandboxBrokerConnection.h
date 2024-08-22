// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSUISAFARISANDBOXBROKERCONNECTION_H
#define WBSUISAFARISANDBOXBROKERCONNECTION_H

@class WBSSafariSandboxBrokerConnection;
@protocol WBSUISafariSandboxBrokerProtocol;



@interface WBSUISafariSandboxBrokerConnection : WBSSafariSandboxBrokerConnection <WBSUISafariSandboxBrokerProtocol>





-(void)getLinkMetadataForMessageWithGUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadLinkPresentationMetdataForMessageWithGUID:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif