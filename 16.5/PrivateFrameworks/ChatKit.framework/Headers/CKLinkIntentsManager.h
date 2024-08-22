// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKLINKINTENTSMANAGER_H
#define CKLINKINTENTSMANAGER_H


#import <Foundation/Foundation.h>


@interface CKLinkIntentsManager : NSObject {
    ? messagesNavigator;
    ? chatController;
}




+(id)sharedManager;
-(id)init;
-(void)purgeDependencies;
-(void)registerChatController:(id)arg0 ;
-(void)registerDependencyWithDetailsController:(id)arg0 ;
-(void)registerMessagesNavigator:(id)arg0 ;


@end


#endif