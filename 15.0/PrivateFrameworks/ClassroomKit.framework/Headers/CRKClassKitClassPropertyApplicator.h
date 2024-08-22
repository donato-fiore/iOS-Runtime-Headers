// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKCLASSKITCLASSPROPERTYAPPLICATOR_H
#define CRKCLASSKITCLASSPROPERTYAPPLICATOR_H

@protocol CRKClassKitRosterRequirements;

#import <Foundation/Foundation.h>


@interface CRKClassKitClassPropertyApplicator : NSObject

@property (readonly, nonatomic) NSObject<CRKClassKitRosterRequirements> *requirements; // ivar: _requirements


-(BOOL)additionsAndRemovalsIntersect:(id)arg0 ;
-(id)applyProperties:(id)arg0 toClass:(id)arg1 error:(*id)arg2 ;
-(id)identifiersOfUsers:(id)arg0 ;
-(id)initWithRequirements:(id)arg0 ;
-(void)addTrustedUser:(id)arg0 toClass:(id)arg1 ;
-(void)addUser:(id)arg0 toClass:(id)arg1 ;
-(void)removeTrustedUser:(id)arg0 fromClass:(id)arg1 ;
-(void)removeUser:(id)arg0 fromClass:(id)arg1 ;


@end


#endif