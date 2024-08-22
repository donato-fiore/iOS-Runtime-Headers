// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLITEMCHANGE_H
#define CPLITEMCHANGE_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;


#import "CPLRecordChange.h"

@interface CPLItemChange : CPLRecordChange <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSArray *containerRelations; // ivar: _containerRelations


+(BOOL)cplShouldIgnorePropertyForCoding:(id)arg0 ;
-(id)containerDescription;
-(id)containerRelationChangesComparedToRelationEnumerator:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)propertiesForChangeType:(NSUInteger)arg0 ;


@end


#endif