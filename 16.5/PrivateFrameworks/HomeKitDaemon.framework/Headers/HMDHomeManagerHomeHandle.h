// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEMANAGERHOMEHANDLE_H
#define HMDHOMEMANAGERHOMEHANDLE_H

@class HMFObject, NSUUID;
@protocol NSSecureCoding;



@interface HMDHomeManagerHomeHandle : HMFObject <NSSecureCoding>



@property (readonly) NSUUID *backingStoreUUID; // ivar: _backingStoreUUID
@property (readonly) NSUUID *homeUUID; // ivar: _homeUUID


+(BOOL)supportsSecureCoding;
-(id)attributeDescriptions;
-(id)initWithBackingStoreUUID:(id)arg0 homeUUID:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif