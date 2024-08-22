// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTCV14WORKFLOWEDITORP33_E161212E502603CD869E5D799E5E5B8E19ACTIONCONNECTORVIEW24ACTIONCONNECTORVIEWMODEL_H
#define _TTCV14WORKFLOWEDITORP33_E161212E502603CD869E5D799E5E5B8E19ACTIONCONNECTORVIEW24ACTIONCONNECTORVIEWMODEL_H

@protocol WFActionEventObserver;

#import <Foundation/Foundation.h>


@interface _TtCV14WorkflowEditorP33_E161212E502603CD869E5D799E5E5B8E19ActionConnectorView24ActionConnectorViewModel : NSObject <WFActionEventObserver>

 {
    ? _isConnectorVisible;
    ? action;
    ? workflow;
}




-(id)init;
-(void)action:(id)arg0 parameterStateDidChangeForKey:(id)arg1 ;


@end


#endif