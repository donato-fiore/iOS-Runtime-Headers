// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10DROPINCORE13DROPINMANAGER_H
#define _TTC10DROPINCORE13DROPINMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC10DropInCore13DropInManager : NSObject {
    ? messageCenter;
    ? logger;
    ? signposter;
    ? callCenterManager;
    ? homeManagerProvider;
    ? deviceManager;
    ? stateManager;
    ? sessionManager;
    ? transactionManager;
    ? xpcClientDataSource;
    ? dropInStateSubscriber;
    ? dropInSessionAnalyticEvent;
}




-(id)init;
-(void)dealloc;


@end


#endif