// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMITORSOPRINT_H
#define HMITORSOPRINT_H

@class HMFObject, NSUUID, NSData;
@protocol NSSecureCoding;



@interface HMITorsoprint : HMFObject <NSSecureCoding>



@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy) NSData *data; // ivar: _data
@property (readonly) BOOL lowQuality; // ivar: _lowQuality


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 data:(id)arg1 ;
-(id)initWithUUID:(id)arg0 data:(id)arg1 lowQuality:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif