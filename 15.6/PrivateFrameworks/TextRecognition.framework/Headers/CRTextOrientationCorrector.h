// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRTEXTORIENTATIONCORRECTOR_H
#define CRTEXTORIENTATIONCORRECTOR_H

@class NSString;
@protocol CRTextOrientationCorrecting;

#import <Foundation/Foundation.h>

#import "CRTextOrientationRecognizerConfiguration.h"
#import "CRCTCCVNLPOrientationDecoder.h"
#import "CRTextOrientationModelV1.h"

@interface CRTextOrientationCorrector : NSObject <CRTextOrientationCorrecting>



@property (retain) CRTextOrientationRecognizerConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (retain) CRCTCCVNLPOrientationDecoder *decoder; // ivar: _decoder
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) CRTextOrientationModelV1 *model; // ivar: _model
@property (readonly) Class superclass;


-(BOOL)correctOrientationForFeatures:(id)arg0 image:(id)arg1 error:(*id)arg2 ;
-(NSInteger)_angleDirectionOfBaselineAngle:(CGFloat)arg0 ;
-(NSInteger)_orientationForBaselineAngle:(CGFloat)arg0 ;
-(NSInteger)calculateAngleDirectionForInput:(id)arg0 error:(*id)arg1 ;
-(id)initWithOptions:(id)arg0 error:(*id)arg1 ;
-(void)_applyAngleDirection:(NSInteger)arg0 feature:(id)arg1 ;


@end


#endif