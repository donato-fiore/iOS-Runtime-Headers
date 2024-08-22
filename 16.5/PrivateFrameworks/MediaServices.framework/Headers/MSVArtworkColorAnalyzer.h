// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVARTWORKCOLORANALYZER_H
#define MSVARTWORKCOLORANALYZER_H


#import <Foundation/Foundation.h>


@interface MSVArtworkColorAnalyzer : NSObject

@property (nonatomic) NSInteger algorithm; // ivar: _algorithm
@property (nonatomic) CGSize preferredImageSize; // ivar: _preferredImageSize
@property (retain, nonatomic) *CGImage sourceImage; // ivar: _sourceImage


+(NSInteger)algorithmWithMPColorAnalyzerAlgorithm:(NSInteger)arg0 ;
-(id)analyze;
-(id)initWithSourceImage:(struct CGImage *)arg0 algorithm:(NSInteger)arg1 preferredImageSize:(struct CGSize )arg2 ;
-(void)analyzeWithCompletionHandler:(id)arg0 ;


@end


#endif