// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDLOCATIONCLUSTERGROUP_H
#define HMDLOCATIONCLUSTERGROUP_H

@class HMFObject, CLLocation, NSMutableArray;



@interface HMDLocationClusterGroup : HMFObject

@property (readonly, copy) CLLocation *center; // ivar: _center
@property (readonly) NSMutableArray *locations; // ivar: _locations


-(id)attributeDescriptions;
-(id)initWithCenter:(id)arg0 ;


@end


#endif