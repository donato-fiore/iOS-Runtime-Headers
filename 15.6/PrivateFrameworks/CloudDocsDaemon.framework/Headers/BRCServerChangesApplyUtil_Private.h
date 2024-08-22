// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCSERVERCHANGESAPPLYUTIL_PRIVATE_H
#define BRCSERVERCHANGESAPPLYUTIL_PRIVATE_H


#import <Foundation/Foundation.h>


@interface BRCServerChangesApplyUtil_Private : NSObject



+(BOOL)_handleApplyingDeletedUnlistedDirectoryIfNecessary:(id)arg0 localItem:(id)arg1 parent:(id)arg2 ;
+(BOOL)appLibraryUndergoingCZM:(id)arg0 zone:(id)arg1 rank:(NSInteger)arg2 parentID:(id)arg3 scheduler:(id)arg4 session:(id)arg5 ;
+(BOOL)itemUndergoingCZMToAnotherZone:(id)arg0 si:(id)arg1 clientZone:(id)arg2 rank:(NSInteger)arg3 scheduler:(id)arg4 zone:(id)arg5 ;
+(BOOL)localItemHasUnsyncedChanges:(id)arg0 si:(id)arg1 rank:(NSInteger)arg2 scheduler:(id)arg3 clientZone:(id)arg4 zone:(id)arg5 isDeleteOfShareRoot:(BOOL)arg6 session:(id)arg7 ;
+(BOOL)serverItemDeadWithNoLiveLocalItem:(id)arg0 si:(id)arg1 rank:(NSInteger)arg2 scheduler:(id)arg3 clientZone:(id)arg4 zone:(id)arg5 ;
+(BOOL)serverItemWouldBeParentedToDeadFolder:(id)arg0 si:(id)arg1 rank:(NSInteger)arg2 scheduler:(id)arg3 zone:(id)arg4 diffs:(NSUInteger)arg5 ;


@end


#endif