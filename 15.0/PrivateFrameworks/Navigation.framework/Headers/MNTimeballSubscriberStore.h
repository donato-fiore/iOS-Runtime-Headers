// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNTIMEBALLSUBSCRIBERSTORE_H
#define MNTIMEBALLSUBSCRIBERSTORE_H

@class NSMutableArray, NSLock, NSArray;

#import <Foundation/Foundation.h>


@interface MNTimeballSubscriberStore : NSObject {
    NSMutableArray *_subscriptions;
    NSLock *_subscriptionsLock;
}


@property (readonly, nonatomic) NSArray *subscriptions;


-(id)init;
-(void)subscribe:(id)arg0 ;
-(void)unsubscribe:(id)arg0 ;
-(void)unsubscribeFromDestination:(id)arg0 ;


@end


#endif