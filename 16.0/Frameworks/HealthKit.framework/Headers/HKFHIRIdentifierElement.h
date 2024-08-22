// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKFHIRIDENTIFIERELEMENT_H
#define HKFHIRIDENTIFIERELEMENT_H

@class NSString, NSArray;
@protocol NSSecureCoding, NSCopying, HKCodedObject;

#import <Foundation/Foundation.h>

#import "HKConcept.h"
#import "HKMedicalCodingCollection.h"

@interface HKFHIRIdentifierElement : NSObject <NSSecureCoding, NSCopying, HKCodedObject>

 {
    HKConcept *_type;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) HKConcept *type;
@property (readonly, copy, nonatomic) HKMedicalCodingCollection *typeCodingCollection;
@property (readonly, copy, nonatomic) NSArray *typeCodings; // ivar: _typeCodings
@property (readonly, copy, nonatomic) NSString *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)identifierWithTypeCodings:(id)arg0 value:(id)arg1 ;
+(id)indexableKeyPathsWithPrefix:(id)arg0 ;
-(BOOL)applyConcepts:(id)arg0 forKeyPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)codingsForKeyPath:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTypeCodings:(id)arg0 value:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif