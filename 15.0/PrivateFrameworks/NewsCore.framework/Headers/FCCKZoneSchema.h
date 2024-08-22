// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCCKZONESCHEMA_H
#define FCCKZONESCHEMA_H

@class NSDictionary, NSString, CKRecordZoneID, NSArray;

#import <Foundation/Foundation.h>


@interface FCCKZoneSchema : NSObject {
    NSDictionary *_recordSchemasByClientType;
    NSDictionary *_recordSchemasByServerType;
    NSDictionary *_staticServerRecordNamesByClientName;
    NSDictionary *_staticClientRecordNamesByServerName;
    BOOL _isDefaultZone;
    BOOL _supportsRecordNameEncryption;
    BOOL _supportsRecordFieldEncryption;
    BOOL _shouldUseZoneWidePCS;
    BOOL _shouldUseSecureContainer;
    NSString *_clientZoneName;
    NSString *_serverZoneName;
    CKRecordZoneID *_clientZoneID;
    CKRecordZoneID *_serverZoneID;
    NSArray *_staticRecordNamesEligibleForMigration;
}




-(id)init;


@end


#endif