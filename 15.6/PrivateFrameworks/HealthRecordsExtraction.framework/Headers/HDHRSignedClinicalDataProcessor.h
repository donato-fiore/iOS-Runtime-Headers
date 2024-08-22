// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDHRSIGNEDCLINICALDATAPROCESSOR_H
#define HDHRSIGNEDCLINICALDATAPROCESSOR_H


#import <Foundation/Foundation.h>


@interface HDHRSignedClinicalDataProcessor : NSObject



-(id)init;
-(id)preprocessDataInSource:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)preprocessFHIRResourceObject:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)processContextCollection:(id)arg0 error:(*id)arg1 ;
-(id)processOriginalSignedClinicalDataRecords:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)reprocessOriginalRecords:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;


@end


#endif