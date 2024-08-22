// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CVNLPCTCTEXTDECODER_H
#define CVNLPCTCTEXTDECODER_H

@class NSString;
@protocol CVNLPTextDecoding;


#import "CVNLPTextDecoder.h"
#import "CVNLPActivationMatrix.h"

@interface CVNLPCTCTextDecoder : CVNLPTextDecoder <CVNLPTextDecoding>



@property (retain, nonatomic) CVNLPActivationMatrix *activationMatrix; // ivar: _activationMatrix
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)decodingResultForKBestPaths:(NSUInteger)arg0 withBeamWidth:(NSUInteger)arg1 ;
-(id)decodingResultForKBestPaths:(NSUInteger)arg0 withBeamWidth:(NSUInteger)arg1 context:(id)arg2 ;
-(id)decodingResultForKBestPaths:(NSUInteger)arg0 withBeamWidth:(NSUInteger)arg1 context:(id)arg2 optimizeAlignment:(BOOL)arg3 ;
-(id)decodingResultWithConfiguration:(id)arg0 withContext:(id)arg1 ;
-(id)greedyDecodingResult;
-(id)greedyDecodingResultWithConfiguration:(id)arg0 ;
-(id)initWithLanguageResourceBundle:(id)arg0 ;


@end


#endif