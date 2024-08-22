// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDUPDATER_H
#define HMDUPDATER_H

@class HMFObject, NSBackgroundActivityScheduler, NSString;
@protocol HMFLogging;



@interface HMDUpdater : HMFObject <HMFLogging>



@property (retain, nonatomic) NSBackgroundActivityScheduler *backgroundScheduler; // ivar: _backgroundScheduler
@property (retain, nonatomic) NSString *buildid; // ivar: _buildid
@property (retain, nonatomic) NSString *currentKitUUID; // ivar: _currentKitUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL internal; // ivar: _internal
@property (retain, nonatomic) NSString *model; // ivar: _model
@property (retain, nonatomic) NSString *platformString; // ivar: _platformString
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *targetKitDateString; // ivar: _targetKitDateString
@property (retain, nonatomic) NSString *targetKitURLString; // ivar: _targetKitURLString
@property (retain, nonatomic) NSString *targetKitUUID; // ivar: _targetKitUUID


+(id)logCategory;
+(id)sharedInstance;
+(void)initialize;
-(id)_downloadURL;
-(id)init;
-(id)logIdentifier;
-(int)_clean;
-(int)_download;
-(int)_executeScript:(char *)arg0 ;
-(int)_install;
-(int)_reboot;
-(int)_rebuild;
-(int)_uninstall;
-(void)_clearInstalledRootUUID;
-(void)_fetchManifestWithCompletion:(id)arg0 ;
-(void)_handleServerResponse:(id)arg0 withData:(id)arg1 error:(id)arg2 ;
-(void)_info;
-(void)_scheduleUpdateCheck;
-(void)dealloc;
-(void)updateWithCompletion:(id)arg0 ;


@end


#endif