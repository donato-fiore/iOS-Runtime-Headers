// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLACCOUNTINGOWNER_H
#define PLACCOUNTINGOWNER_H

@class NSNumber, NSDate, NSString, NSMutableDictionary, NSMutableSet;
@protocol PLAccountingDependencyOwner, PLAccountingOwnerManager;

#import <Foundation/Foundation.h>

#import "PLAccountingRange.h"

@interface PLAccountingOwner : NSObject <PLAccountingDependencyOwner>



@property (retain, nonatomic) NSNumber *ID; // ivar: _ID
@property (retain, nonatomic) NSDate *activationDate; // ivar: _activationDate
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *dependencyIDToDependenciesInRange; // ivar: _dependencyIDToDependenciesInRange
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) NSObject<PLAccountingOwnerManager> *manager; // ivar: _manager
@property (retain, nonatomic) NSMutableSet *observingDependencyIDs; // ivar: _observingDependencyIDs
@property (retain, nonatomic) PLAccountingRange *range; // ivar: _range
@property (retain, nonatomic) NSDate *runDate; // ivar: _runDate
@property (readonly) Class superclass;


-(BOOL)hasRun;
-(void)activate;
-(void)addDependency:(id)arg0 ;
-(void)allRun;
-(void)deactivate;
-(void)didReceiveDependency:(id)arg0 ;
-(void)run;


@end


#endif