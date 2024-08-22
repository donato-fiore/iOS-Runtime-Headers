// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRMULTIMODELTEXTFEATURESPLITTER_H
#define CRMULTIMODELTEXTFEATURESPLITTER_H


#import <Foundation/Foundation.h>

#import "CRRecognizerConfiguration.h"

@interface CRMultiModelTextFeatureSplitter : NSObject

@property (retain) CRRecognizerConfiguration *configuration; // ivar: _configuration


-(id)combinedLineFeature:(id)arg0 lineFeature:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)pruneAndSortRecognizedTextFeatures:(id)arg0 imageSize:(struct CGSize )arg1 ;
-(id)pruneRecognizedTextFeatures:(id)arg0 imageSize:(struct CGSize )arg1 ;
-(void)enumerateTextFeatures:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif