// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDCALLMANAGER_IMPL_H
#define IMDCALLMANAGER_IMPL_H


#import <Foundation/Foundation.h>


@interface IMDCallManager_Impl : NSObject {
    ? queue;
    ? serviceSession;
    ? conversationManager;
    ? featureFlags;
    ? newChatListenerTask;
}




-(id)init;
-(id)initWithServiceSession:(id)arg0 ;
-(void)dealloc;


@end


#endif