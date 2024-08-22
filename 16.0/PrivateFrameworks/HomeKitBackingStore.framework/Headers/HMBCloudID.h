// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMBCLOUDID_H
#define HMBCLOUDID_H

@class HMFObject, CKContainerID, NSString, NSUUID;
@protocol HMBModelObjectStorage, NSSecureCoding, NSCopying;



@interface HMBCloudID : HMFObject <HMBModelObjectStorage, NSSecureCoding, NSCopying>



@property (readonly, nonatomic) CKContainerID *containerID; // ivar: _containerID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *modelID; // ivar: _modelID
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger scope; // ivar: _scope
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)hmbDecodeData:(id)arg0 fromStorageLocation:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)hmbEncodeForStorageLocation:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContainerID:(id)arg0 scope:(NSInteger)arg1 ;
-(id)initWithContainerID:(id)arg0 scope:(NSInteger)arg1 name:(id)arg2 modelID:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif