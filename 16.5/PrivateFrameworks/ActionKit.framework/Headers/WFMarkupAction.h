// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFMARKUPACTION_H
#define WFMARKUPACTION_H

@class WFAction;



@interface WFMarkupAction : WFAction



+(id)userInterfaceProtocol;
+(id)userInterfaceXPCInterface;
-(id)inputDictionary;
-(id)localizedSubcategoryForCategory:(id)arg0 ;
-(id)subcategoryForCategory:(id)arg0 ;
-(void)runWithRemoteUserInterface:(id)arg0 input:(id)arg1 ;


@end


#endif