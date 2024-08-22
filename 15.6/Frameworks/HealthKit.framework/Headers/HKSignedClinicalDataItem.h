// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSIGNEDCLINICALDATAITEM_H
#define HKSIGNEDCLINICALDATAITEM_H

@class NSString, NSUUID, NSDate;
@protocol NSSecureCoding, NSCopying, HKCodedObject;

#import <Foundation/Foundation.h>

#import "HKConcept.h"
#import "HKMedicalCodingCollection.h"

@interface HKSignedClinicalDataItem : NSObject <NSSecureCoding, NSCopying, HKCodedObject>

 {
    HKConcept *_primaryConcept;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *medicalRecordSampleID; // ivar: _medicalRecordSampleID
@property (readonly, copy, nonatomic) HKConcept *primaryConcept;
@property (readonly, copy, nonatomic) HKMedicalCodingCollection *primaryConceptCodingCollection; // ivar: _primaryConceptCodingCollection
@property (readonly, copy, nonatomic) NSDate *relevantDate; // ivar: _relevantDate
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)indexableKeyPathsWithPrefix:(id)arg0 ;
+(id)itemWithPrimaryConceptCodingCollection:(id)arg0 relevantDate:(id)arg1 medicalRecordSampleID:(id)arg2 ;
-(BOOL)applyConcepts:(id)arg0 forKeyPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)codingsForKeyPath:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPrimaryConceptCodingCollection:(id)arg0 relevantDate:(id)arg1 medicalRecordSampleID:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif