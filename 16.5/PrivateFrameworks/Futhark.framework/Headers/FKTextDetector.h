// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FKTEXTDETECTOR_H
#define FKTEXTDETECTOR_H

@class NSString, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FKTextDetector : NSObject {
    ? _sessions;
    *recognizer _recognizer;
    CGSize _size;
    CGRect _roi;
    unsigned int _timeDownscale;
    unsigned int _timeBinarizer;
    unsigned int _timeConcomps;
    unsigned int _timeSequences;
    unsigned int _timeRecognizer;
    ? _memoryUsage;
}


@property (nonatomic) int binarizerLimit; // ivar: _binarizerLimit
@property (nonatomic) BOOL colorSplits; // ivar: _colorSplits
@property (nonatomic) int contrastLimit; // ivar: _contrastLimit
@property (nonatomic) BOOL createFeaturesForAllConcomps; // ivar: _createFeaturesForAllConcomps
@property (nonatomic) BOOL detectDiacritics; // ivar: _detectDiacritics
@property (nonatomic) BOOL enableBinarizerFiltering; // ivar: _enableBinarizerFiltering
@property (nonatomic) ? mergeSettings; // ivar: _mergeSettings
@property (nonatomic) BOOL minimizeFalseDetections; // ivar: _minimizeFalseDetections
@property (nonatomic) int minimumCharacterHeight; // ivar: _minimumCharacterHeight
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *multiThreadingQueue; // ivar: _multiThreadingQueue
@property (copy, nonatomic) NSString *recognitionLanguage; // ivar: _recognitionLanguage
@property (copy, nonatomic) NSArray *recognitionLanguages; // ivar: _recognitionLanguages
@property (nonatomic) BOOL returnSubFeatures; // ivar: _returnSubFeatures
@property (nonatomic) NSInteger thresholdingAlgorithm; // ivar: _thresholdingAlgorithm


-(BOOL)disableMultithreading;
-(NSUInteger)getMemoryUsageOfLastOperation;
-(id)createFeaturesForROI:(struct CGRect )arg0 originalSize:(struct CGSize )arg1 lastID:(*NSInteger)arg2 ;
-(id)createFeaturesForSessionScale:(int)arg0 roi:(struct CGRect )arg1 originalSize:(struct CGSize )arg2 startID:(*NSInteger)arg3 ;
-(id)detectFeaturesInBuffer:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(id)detectFeaturesInBuffer:(struct __CVBuffer *)arg0 withRegionOfInterest:(struct CGRect )arg1 error:(*id)arg2 ;
-(id)initWithDimensions:(struct CGSize )arg0 ;
-(unsigned char)isValidPixelBuffer:(struct __CVBuffer *)arg0 regionOfInterest:(struct CGRect )arg1 error:(*id)arg2 ;
-(void)dealloc;
-(void)mergeFeature:(id)arg0 withArray:(id)arg1 ;
-(void)resetOptions;
-(void)resetTimers;
-(void)runRecognizerOnFeatures:(id)arg0 roi:(struct CGRect )arg1 size:(struct CGSize )arg2 lastID:(*NSInteger)arg3 ;
-(void)translatePropertiesToOptionsWithNumSessions:(int)arg0 ;


@end


#endif