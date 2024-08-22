// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTCC24REQUESTDISPATCHERBRIDGES8CDMPROXY21CDMCLIENTDELEGATEIMPL_H
#define _TTCC24REQUESTDISPATCHERBRIDGES8CDMPROXY21CDMCLIENTDELEGATEIMPL_H

@protocol CDMClientDelegate;

#import <Foundation/Foundation.h>


@interface _TtCC24RequestDispatcherBridges8CDMProxy21CDMClientDelegateImpl : NSObject <CDMClientDelegate>

 {
    ? cdmProxy;
}




-(id)init;
-(void)processCDMNluRequestCallback:(id)arg0 ;
-(void)processCDMNluRequestErrorCallback:(id)arg0 error:(id)arg1 ;


@end


#endif