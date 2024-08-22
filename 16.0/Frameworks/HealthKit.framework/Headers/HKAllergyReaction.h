// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKALLERGYREACTION_H
#define HKALLERGYREACTION_H

@class NSArray, NSString;
@protocol NSSecureCoding, NSCopying, HKCodedObject;

#import <Foundation/Foundation.h>

#import "HKMedicalCoding.h"
#import "HKConcept.h"
#import "HKMedicalDate.h"
#import "HKMedicalCodingCollection.h"

@interface HKAllergyReaction : NSObject <NSSecureCoding, NSCopying, HKCodedObject>

 {
    HKMedicalCoding *_severityCoding;
    NSArray *_manifestationCodings;
    HKConcept *_severity;
    NSArray *_manifestations;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *manifestationCodingCollections;
@property (readonly, copy, nonatomic) NSArray *manifestationCodings;
@property (readonly, copy, nonatomic) NSArray *manifestations;
@property (readonly, copy, nonatomic) HKMedicalDate *onsetDate; // ivar: _onsetDate
@property (readonly, copy, nonatomic) HKConcept *severity;
@property (readonly, copy, nonatomic) HKMedicalCoding *severityCoding;
@property (readonly, copy, nonatomic) HKMedicalCodingCollection *severityCodingCollection;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)allergyReactionWithManifestationCodings:(id)arg0 onsetDate:(id)arg1 severityCoding:(id)arg2 ;
+(id)indexableKeyPathsWithPrefix:(id)arg0 ;
-(BOOL)applyConcepts:(id)arg0 forKeyPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)codingsForKeyPath:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithManifestationCodings:(id)arg0 onsetDate:(id)arg1 severityCoding:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif