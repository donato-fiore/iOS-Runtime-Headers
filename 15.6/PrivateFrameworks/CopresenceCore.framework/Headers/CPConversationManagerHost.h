// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPCONVERSATIONMANAGERHOST_H
#define CPCONVERSATIONMANAGERHOST_H


#import <Foundation/Foundation.h>


@interface CPConversationManagerHost : NSObject {
    ? dataSource;
    ? featureFlags;
    ? serverBag;
    ? queue;
    ? listener;
    ? listenerDeprecated;
    ? connections;
    ? clientShouldConnectNotification;
    ? subscriptions;
    ? $__lazy_storage_$_protectedStorage;
}




-(id)init;
-(id)initWithDataSource:(id)arg0 ;
-(void)dealloc;


@end


#endif