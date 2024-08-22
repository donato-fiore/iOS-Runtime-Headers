// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIFACEPRINT_H
#define HMIFACEPRINT_H

@class HMFObject, NSUUID, NSData;
@protocol NSCopying, NSSecureCoding;



@interface HMIFaceprint : HMFObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy) NSData *data; // ivar: _data
@property (readonly, copy) NSUUID *faceCropUUID; // ivar: _faceCropUUID
@property (readonly, copy) NSUUID *modelUUID; // ivar: _modelUUID
@property (readonly, getter=isSentinelFaceprint) BOOL sentinelFaceprint;


+(BOOL)supportsSecureCoding;
+(id)sentinelFaceprintWithUUID:(id)arg0 modelUUID:(id)arg1 faceCropUUID:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 data:(id)arg1 modelUUID:(id)arg2 faceCropUUID:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif