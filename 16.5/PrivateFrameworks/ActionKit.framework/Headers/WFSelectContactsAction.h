// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSELECTCONTACTSACTION_H
#define WFSELECTCONTACTSACTION_H

@class WFAction;



@interface WFSelectContactsAction : WFAction



+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
-(void)outputContacts:(id)arg0 completionHandler:(id)arg1 ;
-(void)runWithRemoteUserInterface:(id)arg0 input:(id)arg1 ;


@end


#endif