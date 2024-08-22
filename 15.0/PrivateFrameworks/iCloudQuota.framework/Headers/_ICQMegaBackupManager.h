// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ICQMEGABACKUPMANAGER_H
#define _ICQMEGABACKUPMANAGER_H


#import <Foundation/Foundation.h>


@interface _ICQMegaBackupManager : NSObject



-(id)_extendExpirationURLForAccount:(id)arg0 ;
-(id)_quotaBackupCheckURLForAccount:(id)arg0 ;
-(id)_updateStatusURLForAccount:(id)arg0 ;
-(void)extendExpirationForAccount:(id)arg0 deviceBackupUUID:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(void)extendExpirationForAccount:(id)arg0 deviceBackupUUID:(id)arg1 requestedExpirationDate:(id)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)requestMegaBackupForAccount:(id)arg0 deviceBackupUUID:(id)arg1 deviceTotalUsedSpaceInBytes:(id)arg2 entryMethod:(NSInteger)arg3 deepLinkURL:(id)arg4 queue:(id)arg5 completion:(id)arg6 ;
-(void)requestMegaBackupForAccount:(id)arg0 deviceBackupUUID:(id)arg1 deviceTotalUsedSpaceInBytes:(id)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)updateMegaBackupStatusForAccount:(id)arg0 deviceBackupUUID:(id)arg1 status:(NSInteger)arg2 queue:(id)arg3 completion:(id)arg4 ;


@end


#endif