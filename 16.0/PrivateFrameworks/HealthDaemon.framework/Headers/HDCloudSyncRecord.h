// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCRECORD_H
#define HDCLOUDSYNCRECORD_H

@class CKRecord, CKRecordID, NSData;

#import <Foundation/Foundation.h>


@interface HDCloudSyncRecord : NSObject {
    CKRecord *_record;
}


@property (readonly, nonatomic) CKRecord *record;
@property (readonly, copy, nonatomic) CKRecordID *recordID; // ivar: _recordID
@property (nonatomic) BOOL repaired; // ivar: _repaired
@property (readonly, nonatomic) NSInteger schemaVersion;
@property (readonly, copy, nonatomic) NSData *underlyingMessage;
@property (readonly, nonatomic) BOOL unsaved; // ivar: _unsaved


+(BOOL)hasFutureSchema:(id)arg0 ;
+(BOOL)requiresUnderlyingMessage;
+(BOOL)shouldSerializeUnderlyingMessageAsProtected;
+(id)fieldsForProtectedSerialization;
+(id)fieldsForUnprotectedSerialization;
+(id)initWithSerializedRecord:(id)arg0 error:(*id)arg1 ;
+(id)recordWithCKRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validateWithError:(*id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithCKRecord:(id)arg0 schemaVersion:(NSInteger)arg1 ;
-(id)printDescription;
-(id)serialize;
-(id)serializeUnderlyingMessage;


@end


#endif