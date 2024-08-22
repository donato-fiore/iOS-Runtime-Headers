// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMABSORPTION_H
#define AMABSORPTION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface AMAbsorption : NSObject

@property (readonly) NSArray *absorptionReferenceData; // ivar: _absorptionReferenceData
@property (copy) NSArray *absorptionUserData; // ivar: _absorptionUserData
@property (readonly) NSArray *frequencyBands; // ivar: _frequencyBands
@property (readonly) NSString *materialDescription; // ivar: _materialDescription
@property (readonly) NSString *materialName; // ivar: _materialName
@property (readonly) NSArray *numDataPointsReferenceData; // ivar: _numDataPointsReferenceData
@property (readonly) int totalNumDataSetsReferenceData; // ivar: _totalNumDataSetsReferenceData
@property (readonly) NSArray *uncertaintyReferenceData; // ivar: _uncertaintyReferenceData


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validatedWithoutError:(*id)arg0 ;
-(id)initWithMaterialName:(id)arg0 ;
-(id)initWithValues:(id)arg0 error:(*id)arg1 ;


@end


#endif