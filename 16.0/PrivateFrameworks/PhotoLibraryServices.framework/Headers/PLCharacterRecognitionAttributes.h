// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCHARACTERRECOGNITIONATTRIBUTES_H
#define PLCHARACTERRECOGNITIONATTRIBUTES_H

@class NSDate, NSData;


#import "PLManagedObject.h"
#import "PLMediaAnalysisAssetAttributes.h"

@interface PLCharacterRecognitionAttributes : PLManagedObject

@property (retain, nonatomic) NSDate *adjustmentVersion;
@property (nonatomic) short algorithmVersion;
@property (retain, nonatomic) NSData *characterRecognitionData;
@property (retain, nonatomic) NSData *machineReadableCodeData;
@property (retain, nonatomic) PLMediaAnalysisAssetAttributes *mediaAnalysisAssetAttributes;


+(id)entityName;


@end


#endif