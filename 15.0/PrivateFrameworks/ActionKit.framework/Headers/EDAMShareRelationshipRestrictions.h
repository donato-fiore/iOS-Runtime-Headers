// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDAMSHARERELATIONSHIPRESTRICTIONS_H
#define EDAMSHARERELATIONSHIPRESTRICTIONS_H

@class NSNumber;


#import "FATObject.h"

@interface EDAMShareRelationshipRestrictions : FATObject

@property (retain, nonatomic) NSNumber *noSetFullAccess; // ivar: _noSetFullAccess
@property (retain, nonatomic) NSNumber *noSetModify; // ivar: _noSetModify
@property (retain, nonatomic) NSNumber *noSetReadOnly; // ivar: _noSetReadOnly
@property (retain, nonatomic) NSNumber *noSetReadPlusActivity; // ivar: _noSetReadPlusActivity


+(id)structFields;
+(id)structName;


@end


#endif