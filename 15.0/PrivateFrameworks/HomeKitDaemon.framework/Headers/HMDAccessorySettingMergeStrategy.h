// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACCESSORYSETTINGMERGESTRATEGY_H
#define HMDACCESSORYSETTINGMERGESTRATEGY_H

@class HMFObject, NSNumber;



@interface HMDAccessorySettingMergeStrategy : HMFObject

@property (readonly, nonatomic) NSNumber *conflictValue; // ivar: _conflictValue
@property (readonly, nonatomic) NSInteger strategy; // ivar: _strategy


-(id)initWithMergeStrategy:(id)arg0 ;


@end


#endif