// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCWZONESCHEMA_H
#define SCWZONESCHEMA_H

@class NSArray, CKRecordZoneID, NSString;

#import <Foundation/Foundation.h>


@interface SCWZoneSchema : NSObject

@property (readonly, copy, nonatomic) NSArray *allRecordFieldNames;
@property (readonly, nonatomic, getter=isAtomic) BOOL atomic; // ivar: _atomic
@property (copy, nonatomic) NSArray *recordSchemas; // ivar: _recordSchemas
@property (readonly, nonatomic) NSUInteger version; // ivar: _version
@property (readonly, copy, nonatomic) CKRecordZoneID *zoneID; // ivar: _zoneID
@property (readonly, copy, nonatomic) NSString *zoneName; // ivar: _zoneName


-(BOOL)isValidRecord:(id)arg0 ;
-(id)initWithName:(id)arg0 atomic:(BOOL)arg1 recordSchemas:(id)arg2 ;
-(id)initWithName:(id)arg0 atomic:(BOOL)arg1 version:(NSUInteger)arg2 recordSchemas:(id)arg3 ;
-(id)schemaForRecordType:(id)arg0 ;
-(id)validateRecords:(id)arg0 ;


@end


#endif