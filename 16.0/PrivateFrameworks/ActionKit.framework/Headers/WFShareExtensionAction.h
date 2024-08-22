// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSHAREEXTENSIONACTION_H
#define WFSHAREEXTENSIONACTION_H

@class WFAction;



@interface WFShareExtensionAction : WFAction



+(id)userInterfaceProtocol;
-(id)contentItemClasses;
-(id)descriptionSummary;
-(id)extensionBundleIdentifier;
-(id)extensionUserInfo;
-(id)inputConfiguration;
-(id)inputContentClasses;
-(id)inputType;
-(id)shareExtensionDefinition;
-(id)socialServiceType;
-(id)socialTypes;
-(id)stringRepresentationForClasses:(id)arg0 ;
-(id)textItemHandling;
-(void)runWithRemoteUserInterface:(id)arg0 input:(id)arg1 ;


@end


#endif