// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCLEASECONTROLLER_H
#define MPCLEASECONTROLLER_H

@protocol MFLeaseControlling;

#import <Foundation/Foundation.h>

#import "_MPCLeaseManager.h"
#import "MPCMediaFoundationTranslator.h"

@interface MPCLeaseController : NSObject <MFLeaseControlling>



@property (readonly, nonatomic) _MPCLeaseManager *leaseManager; // ivar: _leaseManager
@property (readonly, nonatomic) MPCMediaFoundationTranslator *translator; // ivar: _translator


-(id)initWithTranslator:(id)arg0 leaseManager:(id)arg1 ;
-(void)relinquishLeaseForItem:(id)arg0 completion:(id)arg1 ;
-(void)requestLeaseForItem:(id)arg0 completion:(id)arg1 ;


@end


#endif