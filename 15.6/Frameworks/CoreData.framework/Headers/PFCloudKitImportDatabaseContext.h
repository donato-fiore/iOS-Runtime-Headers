// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFCLOUDKITIMPORTDATABASECONTEXT_H
#define PFCLOUDKITIMPORTDATABASECONTEXT_H

@class NSMutableSet, CKServerChangeToken;

#import <Foundation/Foundation.h>


@interface PFCloudKitImportDatabaseContext : NSObject {
    NSMutableSet *_changedRecordZoneIDs;
    NSMutableSet *_deletedRecordZoneIDs;
    NSMutableSet *_purgedRecordZoneIDs;
    NSMutableSet *_userResetEncryptedDataZoneIDs;
    CKServerChangeToken *_updatedChangeToken;
}




-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif