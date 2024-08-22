// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRCTCTEXTDECODERV1_H
#define CRCTCTEXTDECODERV1_H

@class NSString;
@protocol CRTextDecoding;

#import <Foundation/Foundation.h>

#import "CRCtcBeamSearch.h"
#import "CRNeuralRecognizerConfiguration.h"
#import "CRTextSequenceRecognizerModel.h"
#import "CRRegex.h"

@interface CRCTCTextDecoderV1 : NSObject <CRTextDecoding>



@property (retain, nonatomic) CRCtcBeamSearch *beamSearch; // ivar: _beamSearch
@property (retain) CRNeuralRecognizerConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) CRTextSequenceRecognizerModel *model; // ivar: _model
@property (retain, nonatomic) CRRegex *regExpressions; // ivar: _regExpressions
@property (readonly) Class superclass;


-(BOOL)shouldDecodeWithLM;
-(id)correctLMDecodingWithRegex:(id)arg0 noLMDecoding:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 model:(id)arg1 error:(*id)arg2 ;
-(void)decodeOutput:(id)arg0 imageSize:(struct CGSize )arg1 error:(*id)arg2 ;
-(void)lmDecodeFeaturesWithInfo:(id)arg0 activationMaps:(id)arg1 imageSize:(struct CGSize )arg2 error:(*id)arg3 ;
-(void)maxDecodeFeaturesWithInfo:(id)arg0 activationMaps:(id)arg1 imageSize:(struct CGSize )arg2 error:(*id)arg3 ;


@end


#endif