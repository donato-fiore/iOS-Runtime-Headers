// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICATIONDOSAGE_H
#define HKMEDICATIONDOSAGE_H

@class NSString;
@protocol NSSecureCoding, NSCopying, HKCodedObject;

#import <Foundation/Foundation.h>

#import "HKConcept.h"
#import "HKMedicalCoding.h"
#import "HKMedicalDateInterval.h"

@interface HKMedicationDosage : NSObject <NSSecureCoding, NSCopying, HKCodedObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *instruction; // ivar: _instruction
@property (readonly, copy, nonatomic) HKConcept *method; // ivar: _method
@property (readonly, copy, nonatomic) HKMedicalCoding *methodCoding; // ivar: _methodCoding
@property (readonly, copy, nonatomic) HKConcept *route; // ivar: _route
@property (readonly, copy, nonatomic) HKMedicalCoding *routeCoding; // ivar: _routeCoding
@property (readonly, copy, nonatomic) HKConcept *site; // ivar: _site
@property (readonly, copy, nonatomic) HKMedicalCoding *siteCoding; // ivar: _siteCoding
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) HKMedicalDateInterval *timingPeriod; // ivar: _timingPeriod


+(BOOL)supportsSecureCoding;
+(id)dosageWithInstruction:(id)arg0 timingPeriod:(id)arg1 ;
+(id)dosageWithInstruction:(id)arg0 timingPeriod:(id)arg1 siteCoding:(id)arg2 routeCoding:(id)arg3 methodCoding:(id)arg4 ;
+(id)indexableKeyPathsWithPrefix:(id)arg0 ;
-(BOOL)applyConcepts:(id)arg0 forKeyPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)codingsForKeyPath:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInstruction:(id)arg0 timingPeriod:(id)arg1 siteCoding:(id)arg2 routeCoding:(id)arg3 methodCoding:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif