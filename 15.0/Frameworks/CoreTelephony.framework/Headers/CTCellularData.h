// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTCELLULARDATA_H
#define CTCELLULARDATA_H


#import <Foundation/Foundation.h>


@interface CTCellularData : NSObject {
    *network_usage_policy_client_s _cuPolicyClient;
    queue _cuPolicyClientQueue;
}


@property (copy) id *cellularDataRestrictionDidUpdateNotifier; // ivar: _cellularDataRestrictionDidUpdateNotifier
@property (readonly, nonatomic) NSUInteger restrictedState; // ivar: _restrictedState


-(id)init;
-(void)dealloc;
-(void)setCellularDataRestrictionStateFromPolicies:(*void)arg0 ;


@end


#endif