// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDCLOUDKITCONTROL_H
#define EDCLOUDKITCONTROL_H

@class NSManagedObject, NSString, NSData;



@interface EDCloudKitControl : NSManagedObject

@property (copy, nonatomic) NSString *ckRecordID;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (nonatomic) BOOL migratedFromKVSStorage;


+(id)fetchRequest;


@end


#endif