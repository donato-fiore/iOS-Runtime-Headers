// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPDAEMONOPERATIONMANAGER_H
#define FPDAEMONOPERATIONMANAGER_H

@class NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FPDaemonOperationManager : NSObject {
    BOOL _started;
    NSMutableSet *_localOperationIDs;
    NSObject<OS_dispatch_queue> *_queue;
    int _notifToken;
}




+(id)sharedInstance;
-(id)generateLocalOperationID;
-(id)init;
-(void)_enumerateNewDaemonOperationsWithHandler:(id)arg0 ;
-(void)_receiveLongLivedOperation:(id)arg0 info:(id)arg1 ;
-(void)_updateDaemonOperations;
-(void)dealloc;
-(void)wakeUp;


@end


#endif