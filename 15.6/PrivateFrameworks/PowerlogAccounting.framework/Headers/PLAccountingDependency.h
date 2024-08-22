// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLACCOUNTINGDEPENDENCY_H
#define PLACCOUNTINGDEPENDENCY_H

@class NSNumber, NSDate, NSMutableSet;
@protocol PLAccountingDependencyManager;

#import <Foundation/Foundation.h>

#import "PLAccountingRange.h"

@interface PLAccountingDependency : NSObject

@property (retain, nonatomic) NSNumber *ID; // ivar: _ID
@property (retain, nonatomic) NSDate *activationDate; // ivar: _activationDate
@property (weak) NSObject<PLAccountingDependencyManager> *manager; // ivar: _manager
@property (retain, nonatomic) NSMutableSet *observingOwnerIDs; // ivar: _observingOwnerIDs
@property (retain, nonatomic) PLAccountingRange *range;


-(id)description;
-(void)activate;
-(void)deactivate;
-(void)didReceiveOwner:(id)arg0 ;
-(void)updateWithEndDate:(id)arg0 ;


@end


#endif