// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCKDATABASESCHEMA_H
#define SCKDATABASESCHEMA_H

@class CKContainerID, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface SCKDatabaseSchema : NSObject

@property (readonly, copy, nonatomic) CKContainerID *containerID;
@property (readonly, nonatomic) NSInteger environment; // ivar: _environment
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL requiresDeviceToDeviceEncryption;
@property (nonatomic) NSInteger security; // ivar: _security
@property (readonly, copy, nonatomic) NSArray *zoneIDs;
@property (copy, nonatomic) NSArray *zoneSchemas; // ivar: _zoneSchemas


-(id)initWithName:(id)arg0 environment:(NSInteger)arg1 security:(NSInteger)arg2 zoneSchemas:(id)arg3 ;
-(id)schemaForZoneName:(id)arg0 ;


@end


#endif