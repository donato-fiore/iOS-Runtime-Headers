// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKASMNETWORKCHECKINGROSTERPROVIDER_H
#define CRKASMNETWORKCHECKINGROSTERPROVIDER_H

@class CATNetworkReachability;


#import "CRKASMRosterProviderDecoratorBase.h"

@interface CRKASMNetworkCheckingRosterProvider : CRKASMRosterProviderDecoratorBase

@property (readonly, nonatomic) CATNetworkReachability *networkReachability; // ivar: _networkReachability


+(id)reachabilityError;
-(id)initWithRosterProvider:(id)arg0 ;
-(void)createCourseWithProperties:(id)arg0 completion:(id)arg1 ;
-(void)removeCourseWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)updateCourseWithIdentifier:(id)arg0 properties:(id)arg1 completion:(id)arg2 ;


@end


#endif