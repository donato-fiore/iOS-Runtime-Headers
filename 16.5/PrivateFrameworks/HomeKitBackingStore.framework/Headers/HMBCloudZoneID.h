// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMBCLOUDZONEID_H
#define HMBCLOUDZONEID_H

@class NSString, NSArray, NSData, CKRecordZoneID;
@protocol HMBModelObjectStorage, HMBLocalZoneID;


#import "HMBCloudID.h"

@interface HMBCloudZoneID : HMBCloudID <HMBModelObjectStorage, HMBLocalZoneID>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *labels;
@property (readonly, nonatomic) NSString *name;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSData *token; // ivar: _token
@property (readonly, copy) CKRecordZoneID *zoneID; // ivar: _zoneID


+(BOOL)supportsSecureCoding;
+(id)hmbDecodeData:(id)arg0 fromStorageLocation:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)hmbEncodeForStorageLocation:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContainerID:(id)arg0 scope:(NSInteger)arg1 zoneID:(id)arg2 ;
-(id)initWithContainerID:(id)arg0 scope:(NSInteger)arg1 zoneID:(id)arg2 name:(id)arg3 modelID:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif