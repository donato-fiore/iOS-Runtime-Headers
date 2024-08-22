// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDADDACCESSORYPROGRESSSTATE_H
#define HMDADDACCESSORYPROGRESSSTATE_H

@class HMFObject, NSString, NSUUID, HMAccessoryCategory;



@interface HMDAddAccessoryProgressState : HMFObject

@property (readonly, nonatomic) NSString *accessoryName; // ivar: _accessoryName
@property (readonly, nonatomic) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (readonly, nonatomic) HMAccessoryCategory *category; // ivar: _category
@property (readonly, nonatomic) NSUInteger certificationStatus; // ivar: _certificationStatus
@property (readonly, nonatomic) NSString *manufacturerName; // ivar: _manufacturerName
@property (readonly, nonatomic) NSString *productData; // ivar: _productData


-(id)initWithUUID:(id)arg0 accessoryName:(id)arg1 manufacturerName:(id)arg2 category:(id)arg3 certificationStatus:(NSUInteger)arg4 productData:(id)arg5 ;


@end


#endif