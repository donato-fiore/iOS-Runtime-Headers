// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHUPDATERELATEDDETAILS_H
#define PGGRAPHUPDATERELATEDDETAILS_H

@class NSMutableSet, NSSet;

#import <Foundation/Foundation.h>


@interface PGGraphUpdateRelatedDetails : NSObject

@property (retain, nonatomic) NSMutableSet *accumulatedIdentifiersForMomentNodesRelatedToDeletedPersons; // ivar: _accumulatedIdentifiersForMomentNodesRelatedToDeletedPersons
@property (retain, nonatomic) NSMutableSet *accumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons; // ivar: _accumulatedIdentifiersForMomentNodesRelatedToUpdatedPersons
@property (readonly, nonatomic) NSSet *identifiersForMomentRelatedToDeletedPersons;
@property (readonly, nonatomic) NSSet *identifiersForMomentRelatedToUpdatedPersons;


-(id)_momentNodesFromPersonNodes:(id)arg0 ;
-(id)init;
-(void)_accumulateMomentIdentifiersInto:(id)arg0 forPersonNodes:(id)arg1 ;
-(void)accumulateDetailsForDeletedPersonNodes:(id)arg0 ;
-(void)accumulateDetailsForUpdatedPersonNode:(id)arg0 personChange:(id)arg1 ;


@end


#endif