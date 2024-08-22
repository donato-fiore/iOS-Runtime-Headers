// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKCIMAGEBASEOVERLAYVIEW_H
#define VKCIMAGEBASEOVERLAYVIEW_H

@class NSString;


#import "VKPlatformView.h"
#import "VKCTextRecognitionResult.h"

@interface VKCImageBaseOverlayView : VKPlatformView

@property (nonatomic) CGRect contentsRect; // ivar: _contentsRect
@property (copy, nonatomic) NSString *customAnalyticsIdentifier; // ivar: _customAnalyticsIdentifier
@property (nonatomic) CGRect normalizedVisibleRect; // ivar: _normalizedVisibleRect
@property (retain, nonatomic) VKCTextRecognitionResult *recognitionResult; // ivar: _recognitionResult


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)normalizedQuadFromViewQuad:(id)arg0 ;
-(id)viewQuadFromNormalizedQuad:(id)arg0 ;
-(struct CGPoint )normalizedPointFromViewPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )viewPointFromNormalizedPoint:(struct CGPoint )arg0 ;
-(struct CGRect )normalizedRectFromViewRect:(struct CGRect )arg0 ;
-(struct CGRect )viewRectFromNormalizedRect:(struct CGRect )arg0 ;
-(void)updateSelectionRectsForWindowChange;


@end


#endif