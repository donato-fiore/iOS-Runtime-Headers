// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDAMNOTESHARERELATIONSHIPRESTRICTIONS_H
#define EDAMNOTESHARERELATIONSHIPRESTRICTIONS_H

@class NSNumber;


#import "FATObject.h"

@interface EDAMNoteShareRelationshipRestrictions : FATObject

@property (retain, nonatomic) NSNumber *noSetFullAccess; // ivar: _noSetFullAccess
@property (retain, nonatomic) NSNumber *noSetModifyNote; // ivar: _noSetModifyNote
@property (retain, nonatomic) NSNumber *noSetReadNote; // ivar: _noSetReadNote


+(id)structFields;
+(id)structName;


@end


#endif