// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UTUNDECLAREDTYPERECORD_H
#define _UTUNDECLAREDTYPERECORD_H

@class NSString;


#import "UTTypeRecord.h"

@interface _UTUndeclaredTypeRecord : UTTypeRecord {
    NSString *_identifier;
}




+(BOOL)supportsSecureCoding;
-(BOOL)conformsToTypeIdentifier:(id)arg0 ;
-(BOOL)isInPublicDomain;
-(id)_initWithContext:(struct LSContext *)arg0 identifier:(id)arg1 ;
-(id)_persistentIdentifierWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(*void)arg3 ;
-(id)awakeAfterUsingCoder:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)declaration;
-(id)identifier;
-(id)initWithCoder:(id)arg0 ;
-(id)version;
-(void)_enumerateRelatedTypeUnitsOrDynamicIdsWithContext:(struct LSContext *)arg0 unitID:(unsigned int)arg1 maximumDegreeOfSeparation:(NSInteger)arg2 block:(id)arg3 ;
-(void)_enumerateRelatedTypesWithMaximumDegreeOfSeparation:(NSInteger)arg0 block:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif