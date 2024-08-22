// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSCATTERING_H
#define AMSCATTERING_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface AMScattering : NSObject

@property (readonly) NSArray *frequencyBands; // ivar: _frequencyBands
@property (readonly) NSString *materialDescription; // ivar: _materialDescription
@property (readonly) NSString *materialName; // ivar: _materialName
@property (readonly) NSArray *numDataPointsReferenceData; // ivar: _numDataPointsReferenceData
@property (readonly) NSArray *scatteringReferenceData; // ivar: _scatteringReferenceData
@property (copy) NSArray *scatteringUserData; // ivar: _scatteringUserData
@property (readonly) int totalNumDataSetsReferenceData; // ivar: _totalNumDataSetsReferenceData
@property (readonly) NSArray *uncertaintyReferenceData; // ivar: _uncertaintyReferenceData


+(id)defaultMaterialScattering;
-(BOOL)validatedWithoutError:(*id)arg0 ;
-(id)initWithName:(id)arg0 inBundle:(id)arg1 error:(*id)arg2 ;
-(id)initWithValues:(id)arg0 error:(*id)arg1 ;


@end


#endif