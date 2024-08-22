// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QUICKTYPEPFLTRAINERMLP_H
#define QUICKTYPEPFLTRAINERMLP_H

@class NSURL, NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface QuickTypePFLTrainerMLP : NSObject {
    NSURL *_seedModelPath;
    CFScopedPtr<void *> _model;
}


@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (retain, nonatomic) NSNumber *clippingNorm; // ivar: _clippingNorm
@property (retain, nonatomic) NSNumber *gradientClipMax; // ivar: _gradientClipMax
@property (retain, nonatomic) NSNumber *gradientClipMin; // ivar: _gradientClipMin
@property (readonly, nonatomic) NSNumber *initialLoss; // ivar: _initialLoss
@property (retain, nonatomic) NSNumber *learningRate; // ivar: _learningRate
@property (nonatomic) NSUInteger normBinCount; // ivar: _normBinCount
@property (readonly, nonatomic) NSString *privacyIdentifier; // ivar: _privacyIdentifier
@property (readonly, nonatomic) NSNumber *trainingLoss; // ivar: _trainingLoss


+(id)reportingStringForModelUpdates:(*float)arg0 count:(NSUInteger)arg1 ;
+(struct __CFData *)copyToFlatBuffer:(*void)arg0 ;
+(void)initialize;
-(BOOL)trainOn:(id)arg0 forNEpochs:(NSUInteger)arg1 ;
-(id)getWeightUpdatesAddNoise:(BOOL)arg0 encryptionKey:(id)arg1 recipe:(id)arg2 ;
-(id)initWithSeedModelPath:(id)arg0 andPrivacyIdentifier:(id)arg1 ;
-(void)writeModelToURL:(id)arg0 ;


@end


#endif