// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HMDPENDINGREGIONUPDATE_H
#define _HMDPENDINGREGIONUPDATE_H

@class HMFObject, NSString;
@protocol HMFLogging;



@interface _HMDPendingRegionUpdate : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


+(id)logCategory;
-(id)attributeDescriptions;


@end


#endif