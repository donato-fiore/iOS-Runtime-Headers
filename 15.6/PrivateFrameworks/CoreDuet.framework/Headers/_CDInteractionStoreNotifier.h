// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDINTERACTIONSTORENOTIFIER_H
#define _CDINTERACTIONSTORENOTIFIER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_CDInteractionStore.h"

@interface _CDInteractionStoreNotifier : NSObject {
    int _notifierToken;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, weak, nonatomic) _CDInteractionStore *interactionStore; // ivar: _interactionStore


-(id)initWithInteractionStore:(id)arg0 ;
-(void)dealloc;
-(void)deleted;
-(void)distributedNotificationForRecorded:(id)arg0 ;
-(void)postPackedMechanisms:(NSUInteger)arg0 ;
-(void)recorded:(id)arg0 ;
-(void)resume;
-(void)suspend;


@end


#endif