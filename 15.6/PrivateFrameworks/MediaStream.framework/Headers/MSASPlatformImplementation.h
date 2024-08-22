// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSASPLATFORMIMPLEMENTATION_H
#define MSASPLATFORMIMPLEMENTATION_H

@class ACAccountStore, NSString;
@protocol MSASPlatform;

#import <Foundation/Foundation.h>


@interface MSASPlatformImplementation : NSObject <MSASPlatform>



@property (retain, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)MSASIsAllowedToTransferMetadata;
-(BOOL)MSASIsAllowedToUploadAssets;
-(BOOL)MSASPersonIDIsAllowedToDownloadAssets:(id)arg0 ;
-(BOOL)deviceHasEnoughDiskSpaceRemainingToOperate;
-(BOOL)personIDEnabledForAlbumSharing:(id)arg0 ;
-(BOOL)personIDUsesProductionPushEnvironment:(id)arg0 ;
-(BOOL)shouldEnableNewFeatures;
-(BOOL)shouldLogAtLevel:(int)arg0 ;
-(Class)pluginClass;
-(id)MMCSDownloadSocketOptionsForPersonID:(id)arg0 ;
-(id)MMCSUploadSocketOptionsForPersonID:(id)arg0 ;
-(id)_accountForPersonID:(id)arg0 ;
-(id)albumSharingDaemon;
-(id)baseSharingURLForPersonID:(id)arg0 ;
-(id)init;
-(id)pathAlbumSharingDir;
-(id)personIDsEnabledForAlbumSharing;
-(id)pushTokenForPersonID:(id)arg0 ;
-(int)MMCSConcurrentConnectionsCount;
-(void)logLevel:(int)arg0 personID:(id)arg1 albumGUID:(id)arg2 format:(id)arg3 ;


@end


#endif