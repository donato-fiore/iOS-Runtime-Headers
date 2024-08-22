// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSFAMILYINFOLOOKUPTASK_H
#define AMSFAMILYINFOLOOKUPTASK_H

@class ACAccount, NSString;
@protocol AMSBagConsumer, AMSBagProtocol;


#import "AMSTask.h"

@interface AMSFamilyInfoLookupTask : AMSTask <AMSBagConsumer>



@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *logKey; // ivar: _logKey
@property (readonly) Class superclass;


+(id)_processURLResult:(id)arg0 ;
+(id)createBagForSubProfile;
-(id)_cachedFamilyInfoLookupResultForAccount:(id)arg0 ;
-(id)_currentCachedFamilyInfo;
-(id)_pathForCachedFamilyInfoLookupResult;
-(id)_performFamilyInfoRequestForAccount:(id)arg0 error:(*id)arg1 ;
-(id)initWithAccount:(id)arg0 bag:(id)arg1 ;
-(id)initWithBag:(id)arg0 ;
-(id)initWithBagContract:(id)arg0 ;
-(id)performFamilyInfoLookup;
-(void)_cacheFamilyInfoLookupResult:(id)arg0 forAccount:(id)arg1 ;


@end


#endif