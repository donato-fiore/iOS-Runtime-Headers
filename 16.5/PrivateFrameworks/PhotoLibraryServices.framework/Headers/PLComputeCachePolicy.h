// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCOMPUTECACHEPOLICY_H
#define PLCOMPUTECACHEPOLICY_H

@class NSString;
@protocol PLComputeCachePolicyDataSource;

#import <Foundation/Foundation.h>

#import "PLComputeCachePolicyConfiguration.h"

@interface PLComputeCachePolicy : NSObject {
    id<PLComputeCachePolicyDataSource> *_data;
}


@property (readonly, nonatomic) NSInteger allowPolicy; // ivar: _allowPolicy
@property (readonly, nonatomic) PLComputeCachePolicyConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) NSInteger denyPolicy; // ivar: _denyPolicy
@property (readonly, nonatomic) NSString *reason; // ivar: _reason


-(BOOL)_isAssetCountWithinPolicy;
-(BOOL)_isLastSnapshotDateWithinPolicy;
-(BOOL)_isiCloudTierWithinPolicy;
-(BOOL)snapshotAllowed;
-(BOOL)snapshotRequired;
-(NSInteger)_deriveAllowPolicy;
-(NSInteger)_deriveDenyPolicy;
-(id)initWithPolicyData:(id)arg0 configuration:(id)arg1 ;
-(void)_checkAllowPolicy;
-(void)_checkDenyPolicy;


@end


#endif