// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCLOUDPHOTOSSETTINGOBSERVER_H
#define HMDCLOUDPHOTOSSETTINGOBSERVER_H

@class HMFObject, NSString, NSNotificationCenter;
@protocol HMFLogging;



@interface HMDCloudPhotosSettingObserver : HMFObject <HMFLogging>



@property (readonly) id *accountFactory; // ivar: _accountFactory
@property (getter=isCloudPhotosEnabled) BOOL cloudPhotosEnabled; // ivar: _cloudPhotosEnabled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) Class superclass;


+(id)logCategory;
+(id)sharedInstance;
-(BOOL)fetchCloudPhotosEnabled;
-(id)init;
// -(id)initWithAccountFactory:(id)arg0 notificationCenter:(unk)arg1  ;
-(void)handleAccountStoreDidChangeNotification:(id)arg0 ;


@end


#endif