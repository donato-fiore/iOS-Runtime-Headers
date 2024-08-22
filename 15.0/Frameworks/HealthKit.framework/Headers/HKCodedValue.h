// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCODEDVALUE_H
#define HKCODEDVALUE_H

@class NSArray, NSString;
@protocol NSSecureCoding, NSCopying, HKCodedObject;

#import <Foundation/Foundation.h>

#import "HKConcept.h"
#import "HKInspectableValue.h"

@interface HKCodedValue : NSObject <NSSecureCoding, NSCopying, HKCodedObject>

 {
    HKConcept *_concept;
}


@property (readonly, copy, nonatomic) NSArray *codings; // ivar: _codings
@property (readonly, copy, nonatomic) HKConcept *concept;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *referenceRanges; // ivar: _referenceRanges
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) HKInspectableValue *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)codedValueWithCodings:(id)arg0 value:(id)arg1 referenceRanges:(id)arg2 ;
+(id)indexableKeyPathsWithPrefix:(id)arg0 ;
-(BOOL)applyConcepts:(id)arg0 forKeyPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)chartableCodedQuantitySetWithDate:(id)arg0 error:(*id)arg1 ;
-(id)chartableCodedQuantityWithError:(*id)arg0 ;
-(id)codingsForKeyPath:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCodings:(id)arg0 value:(id)arg1 referenceRanges:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif