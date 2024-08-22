// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKSHARETARGETCOLLECTOR_H
#define CRKSHARETARGETCOLLECTOR_H

@class NSSet;
@protocol CRKShareTargetCollectorDelegate;

#import <Foundation/Foundation.h>


@interface CRKShareTargetCollector : NSObject

@property (weak, nonatomic) NSObject<CRKShareTargetCollectorDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSSet *instructorTargets; // ivar: _instructorTargets
@property (copy, nonatomic) NSSet *studentTargets; // ivar: _studentTargets


-(id)init;
-(void)didFindTargets:(id)arg0 ;
-(void)didRemoveTargets:(id)arg0 ;
-(void)diffNewTargets:(id)arg0 againstOldTargets:(id)arg1 ;
-(void)instructorTargetsDidChange:(id)arg0 ;
-(void)studentTargetsDidChange:(id)arg0 ;


@end


#endif