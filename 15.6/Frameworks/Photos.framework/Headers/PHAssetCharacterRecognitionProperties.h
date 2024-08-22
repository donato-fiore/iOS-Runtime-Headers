// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASSETCHARACTERRECOGNITIONPROPERTIES_H
#define PHASSETCHARACTERRECOGNITIONPROPERTIES_H

@class NSDate, NSData;


#import "PHAssetPropertySet.h"

@interface PHAssetCharacterRecognitionProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSDate *adjustmentVersion; // ivar: _adjustmentVersion
@property (readonly, nonatomic) NSInteger algorithmVersion; // ivar: _algorithmVersion
@property (readonly, nonatomic) NSData *characterRecognitionData; // ivar: _characterRecognitionData
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSData *machineReadableCodeData; // ivar: _machineReadableCodeData


+(id)entityName;
+(id)keyPathFromPrimaryObject;
+(id)propertiesToFetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 asset:(id)arg1 prefetched:(BOOL)arg2 ;


@end


#endif