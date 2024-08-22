// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERACLIPUSERNOTIFICATIONCENTER_H
#define HMDCAMERACLIPUSERNOTIFICATIONCENTER_H

@class HMFObject, NSString;
@protocol HMFLogging, HMDCameraBulletinBoard, HMDFileManager, OS_dispatch_queue;



@interface HMDCameraClipUserNotificationCenter : HMFObject <HMFLogging>



@property (readonly) NSObject<HMDCameraBulletinBoard> *bulletinBoard; // ivar: _bulletinBoard
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<HMDFileManager> *fileManager; // ivar: _fileManager
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)_firstAvailableHeroFrameURLForSignificantEvents:(id)arg0 cameraProfile:(id)arg1 ;
-(id)_writeHeroFrameData:(id)arg0 ;
-(id)bulletinForClipSignificantEvent:(id)arg0 cameraProfile:(id)arg1 ;
-(id)initWithBulletinBoard:(id)arg0 workQueue:(id)arg1 ;
-(id)initWithBulletinBoard:(id)arg0 workQueue:(id)arg1 fileManager:(id)arg2 ;
-(void)_insertClipSignificantEventBulletin:(id)arg0 ;
-(void)postNotificationForBulletin:(id)arg0 significantEvent:(id)arg1 ;
-(void)postNotificationForSignificantEvent:(id)arg0 heroFrameData:(id)arg1 cameraProfile:(id)arg2 ;
-(void)removeCachedHeroFrameImages;
-(void)removeEventNotificationForClipWithUUID:(id)arg0 ;
-(void)removeEventNotificationsForCameraProfile:(id)arg0 ;


@end


#endif