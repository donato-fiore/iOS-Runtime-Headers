// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMCOMMSAFETYSETTINGSMANAGER_H
#define IMCOMMSAFETYSETTINGSMANAGER_H

@class NSMutableArray;
@protocol IMSystemMonitorListener, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMCommSafetySettingsManager : NSObject <IMSystemMonitorListener>

 {
    int _notificationToken;
}


@property (nonatomic) BOOL checkSensitivePhotos; // ivar: _checkSensitivePhotos
@property (nonatomic) BOOL checkSensitivePhotosAnalyticsEnabled; // ivar: _checkSensitivePhotosAnalyticsEnabled
@property (nonatomic) BOOL childIsYoungAgeGroup; // ivar: _childIsYoungAgeGroup
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // ivar: _connectionQueue
@property (nonatomic) BOOL hasConnected; // ivar: _hasConnected
@property (retain, nonatomic) NSMutableArray *parents; // ivar: _parents
@property (nonatomic) NSInteger protectedChildAge; // ivar: _protectedChildAge
@property (nonatomic) BOOL shouldNotifyParentAboutSensitivePhotos; // ivar: _shouldNotifyParentAboutSensitivePhotos


+(id)sharedManager;
-(id)init;
-(void)_connectToFamilyCircle:(id)arg0 ;
-(void)_updateSettings;
-(void)dealloc;
-(void)systemDidLeaveFirstDataProtectionLock;


@end


#endif