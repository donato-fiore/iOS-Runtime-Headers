// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRNOTIFICATIONQUEUE_H
#define BRNOTIFICATIONQUEUE_H

@class NSMutableArray, NSMutableDictionary;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface BRNotificationQueue : NSObject <NSFastEnumeration>

 {
    NSMutableArray *_array;
    NSMutableArray *_callbacks;
    NSMutableDictionary *_index;
    NSUInteger _dequeued;
    NSUInteger _dequeuedNotificationCount;
}


@property (readonly, nonatomic) NSUInteger count;


-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)description;
-(id)init;
-(void)_filterIndex:(id)arg0 ;
-(void)addDequeueCallback:(id)arg0 ;
-(void)addNotification:(id)arg0 asDead:(BOOL)arg1 ;
-(void)dequeue:(NSUInteger)arg0 block:(id)arg1 ;
-(void)processDequeueCallbacks;
-(void)removeAllObjects;


@end


#endif