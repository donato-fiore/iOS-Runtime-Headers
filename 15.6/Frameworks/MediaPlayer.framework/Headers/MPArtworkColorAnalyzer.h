// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPARTWORKCOLORANALYZER_H
#define MPARTWORKCOLORANALYZER_H

@class UIImage;

#import <Foundation/Foundation.h>


@interface MPArtworkColorAnalyzer : NSObject

@property (readonly, nonatomic) NSInteger algorithm; // ivar: _algorithm
@property (readonly, nonatomic) UIImage *image; // ivar: _image


-(id)_fallbackColorAnalysis;
-(id)initWithImage:(id)arg0 algorithm:(NSInteger)arg1 ;
-(void)analyzeWithCompletionHandler:(id)arg0 ;


@end


#endif