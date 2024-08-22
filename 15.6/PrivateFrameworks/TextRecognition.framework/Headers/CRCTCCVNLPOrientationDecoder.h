// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRCTCCVNLPORIENTATIONDECODER_H
#define CRCTCCVNLPORIENTATIONDECODER_H

@class NSOrderedSet, NSString;
@protocol CRTextDecoding;

#import <Foundation/Foundation.h>

#import "CRTextSequenceRecognizerModel.h"

@interface CRCTCCVNLPOrientationDecoder : NSObject <CRTextDecoding>



@property (readonly, nonatomic) NSOrderedSet *characterObservations; // ivar: _characterObservations
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) CRTextSequenceRecognizerModel *model; // ivar: _model
@property (readonly) Class superclass;


-(BOOL)shouldDecodeWithLM;
-(id)_buildActivationMatrices:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 model:(id)arg1 error:(*id)arg2 ;
-(void)_create2DArraysFromInputArray:(id)arg0 classSize:(*NSUInteger)arg1 outputArrays:(*void)arg2 ;
-(void)_decodeFeaturesWithInfo:(id)arg0 activations:(id)arg1 error:(*id)arg2 ;
-(void)decodeOutput:(id)arg0 imageSize:(struct CGSize )arg1 error:(*id)arg2 ;


@end


#endif