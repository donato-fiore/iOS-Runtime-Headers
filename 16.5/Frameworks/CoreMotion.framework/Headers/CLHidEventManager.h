// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLHIDEVENTMANAGER_H
#define CLHIDEVENTMANAGER_H

@class HIDEventSystemClient, NSMutableArray;
@protocol CLHidEventManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CLHidEventManager : NSObject

@property (nonatomic) NSObject<CLHidEventManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, nonatomic) HIDEventSystemClient *manager; // ivar: _manager
@property (retain, nonatomic) NSMutableArray *matching; // ivar: _matching


-(id)initWithDelegate:(id)arg0 queue:(id)arg1 matching:(id)arg2 type:(NSInteger)arg3 ;
-(void)dealloc;


@end


#endif