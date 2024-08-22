// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKRECORDOBSERVERMANAGER_H
#define CKRECORDOBSERVERMANAGER_H

@class NSMapTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKRecordObserverManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_recordObservers;
}




+(id)sharedManager;
-(id)init;
-(void)addRecordObserver:(id)arg0 block:(id)arg1 ;
-(void)handleRecordChange:(id)arg0 container:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeRecordObserver:(id)arg0 ;


@end


#endif