// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKIDENTIFIER_H
#define _DKIDENTIFIER_H

@class DKObject, NSString;
@protocol _DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType;


#import "_DKIdentifierType.h"

@interface _DKIdentifier : DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) _DKIdentifierType *identifierType; // ivar: _identifierType
@property (retain) NSString *stringValue; // ivar: _stringValue
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_identifierFromManagedObject:(id)arg0 readMetadata:(BOOL)arg1 cache:(id)arg2 ;
+(id)entityName;
+(id)fromPBCodable:(id)arg0 ;
+(id)identifierWithString:(id)arg0 type:(id)arg1 ;
+(id)objectFromManagedObject:(id)arg0 readMetadata:(BOOL)arg1 excludedMetadataKeys:(id)arg2 cache:(id)arg3 ;
-(BOOL)copyToManagedObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)doubleValue;
-(NSInteger)compareValue:(id)arg0 ;
-(NSInteger)integerValue;
-(NSInteger)typeCode;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 type:(id)arg1 ;
-(id)objectType;
-(id)primaryValue;
-(id)toPBCodable;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif