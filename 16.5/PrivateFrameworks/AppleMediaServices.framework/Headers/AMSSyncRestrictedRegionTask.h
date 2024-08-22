// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSSYNCRESTRICTEDREGIONTASK_H
#define AMSSYNCRESTRICTEDREGIONTASK_H

@class ACAccount, NSString;
@protocol AMSBagConsumer, AMSBagProtocol;


#import "AMSTask.h"

@interface AMSSyncRestrictedRegionTask : AMSTask <AMSBagConsumer>



@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)didExceededSyncDuration:(CGFloat)arg0 lastTimestamp:(CGFloat)arg1 currentTimestamp:(CGFloat)arg2 ;
+(BOOL)hasCachedRestrictedRegionsValueFromAccount:(id)arg0 cachedTimestamp:(*CGFloat)arg1 ;
+(BOOL)storefrontContainsRestrictedRegionsValueFromBag:(id)arg0 ;
+(CGFloat)checkRestrictedRegionDurationValueFromBag:(id)arg0 ;
+(CGFloat)durationOfSyncRestrictedRegionValueFromBag:(id)arg0 ;
+(id)createBagForSubProfile;
+(id)createSyncAccountFlagsTaskForAccount:(id)arg0 bag:(id)arg1 ;
-(id)initWithAccount:(id)arg0 ;
-(id)initWithAccount:(id)arg0 bag:(id)arg1 ;
-(id)performSync;
-(void)cacheRestrictedRegionSyncTimestamp:(CGFloat)arg0 ;


@end


#endif