// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UPLOADEDMODELCONFIGURATION_H
#define UPLOADEDMODELCONFIGURATION_H

@class NSString, NSLocale;

#import <Foundation/Foundation.h>

#import "UPPreprocessor.h"

@interface UPLoadedModelConfiguration : NSObject

@property (readonly, nonatomic) *void beamMaskInput; // ivar: _beamMaskInput
@property (readonly, nonatomic) NSString *bioLabelsVocabPath; // ivar: _bioLabelsVocabPath
@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) *EspressoModule calibrationEspressoModule; // ivar: _calibrationEspressoModule
@property (readonly) BOOL hasCalibrationModel;
@property (readonly, nonatomic) NSString *intentVocabPath; // ivar: _intentVocabPath
@property (readonly, nonatomic) *void labelToValueType; // ivar: _labelToValueType
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) *EspressoModule parserEspressoModule; // ivar: _parserEspressoModule
@property (readonly, nonatomic) UPPreprocessor *preprocessor; // ivar: _preprocessor
@property (readonly, nonatomic) *void resolver; // ivar: _resolver


-(id)initWithModelConfiguration:(id)arg0 ;
-(void)dealloc;


@end


#endif