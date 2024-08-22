// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NDOFOLLOWUP_H
#define NDOFOLLOWUP_H

@protocol NDOFollowUpProvider;

#import <Foundation/Foundation.h>


@interface NDOFollowUp : NSObject

@property (retain) NSObject<NDOFollowUpProvider> *followUpProvider; // ivar: _followUpProvider


+(id)uniqueIdentfierForSerialNumber:(id)arg0 ;
-(BOOL)_checkConversionEligibilityForDevice:(id)arg0 ;
-(BOOL)_postFollowUpWithDevicesInfo:(id)arg0 repostAllowed:(BOOL)arg1 ;
-(BOOL)postFollowUpWithDevicesInfo:(id)arg0 ;
-(NSUInteger)pendingFollowUpCount;
-(id)init;
-(id)initWithFollowUpProvider:(id)arg0 ;
-(id)refreshFollowupWithDeviceInfo:(id)arg0 allowForcePost:(BOOL)arg1 ;
-(id)refreshFollowupWithDeviceInfos:(id)arg0 ;
-(id)refreshFollowupWithDeviceInfos:(id)arg0 clearUntrackedDeviceFollowups:(BOOL)arg1 allowForcePost:(BOOL)arg2 ;
-(void)_clearFollowUpForSerialNumber:(id)arg0 ;
-(void)_clearFollowUpWithDevices:(id)arg0 ;
-(void)_setupFollowUpItem:(id)arg0 withDeviceInfo:(id)arg1 ;
-(void)dismissFollowUpForSerialNumber:(id)arg0 ;
-(void)migrateLegacyFollowUpIfNeededWithDeviceInfo:(id)arg0 ;
-(void)postFollowUpWithDeviceInfo:(id)arg0 ;


@end


#endif