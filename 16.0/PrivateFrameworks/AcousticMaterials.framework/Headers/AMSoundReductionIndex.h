// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSOUNDREDUCTIONINDEX_H
#define AMSOUNDREDUCTIONINDEX_H

@class NSNumber, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface AMSoundReductionIndex : NSObject

@property (readonly) NSNumber *averageSoundReductionIndex; // ivar: _averageSoundReductionIndex
@property (readonly) NSArray *frequencyBands; // ivar: _frequencyBands
@property (readonly) NSNumber *materialDepth; // ivar: _materialDepth
@property (readonly) NSString *materialDescription; // ivar: _materialDescription
@property (readonly) NSString *materialName; // ivar: _materialName
@property (readonly) NSArray *numDataPointsReferenceData; // ivar: _numDataPointsReferenceData
@property (readonly) NSArray *soundReductionIndexReferenceData; // ivar: _soundReductionIndexReferenceData
@property (copy) NSArray *soundReductionIndexUserData; // ivar: _soundReductionIndexUserData
@property (readonly) int totalNumDataSetsReferenceData; // ivar: _totalNumDataSetsReferenceData
@property (readonly) NSNumber *uncertaintyMaterialDepth; // ivar: _uncertaintyMaterialDepth
@property (readonly) NSArray *uncertaintyReferenceData; // ivar: _uncertaintyReferenceData


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validatedWithoutError:(*id)arg0 ;
-(id)initWithMaterialName:(id)arg0 ;
-(id)initWithValues:(id)arg0 error:(*id)arg1 ;


@end


#endif