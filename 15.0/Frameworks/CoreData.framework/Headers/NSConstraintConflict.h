// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSCONSTRAINTCONFLICT_H
#define NSCONSTRAINTCONFLICT_H

@class NSArray, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSManagedObject.h"

@interface NSConstraintConflict : NSObject <NSSecureCoding>



@property (readonly, copy) NSArray *conflictingObjects; // ivar: _conflictingObjects
@property (readonly, copy) NSArray *conflictingSnapshots; // ivar: _conflictingSnapshots
@property (readonly, copy) NSArray *constraint; // ivar: _constraint
@property (readonly, copy) NSDictionary *constraintValues; // ivar: _conflictedValues
@property (readonly, retain) NSManagedObject *databaseObject; // ivar: _databaseObject
@property (readonly, retain) NSDictionary *databaseSnapshot; // ivar: _databaseSnapshot


+(BOOL)supportsSecureCoding;
-(BOOL)_isDBConflict;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConstraint:(id)arg0 databaseObject:(id)arg1 databaseSnapshot:(id)arg2 conflictingObjects:(id)arg3 conflictingSnapshots:(id)arg4 ;
-(void)_doCleanupForXPCStore:(id)arg0 context:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif