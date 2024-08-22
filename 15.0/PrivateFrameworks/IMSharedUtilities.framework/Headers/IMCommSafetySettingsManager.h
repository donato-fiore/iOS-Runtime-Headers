// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMCOMMSAFETYSETTINGSMANAGER_H
#define IMCOMMSAFETYSETTINGSMANAGER_H

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface IMCommSafetySettingsManager : NSObject {
    int _notificationToken;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // ivar: _connectionQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue; // ivar: _isolationQueue
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *updateInProgress; // ivar: _updateInProgress


+(id)sharedManager;
-(id)init;
-(void)_connectToFamilyCircle:(id)arg0 ;
-(void)_updateSettings;
-(void)dealloc;


@end


#endif