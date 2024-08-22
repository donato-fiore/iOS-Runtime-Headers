// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXOVERLAYEFFECTDEBUGVIEWOPTIONS_H
#define JFXOVERLAYEFFECTDEBUGVIEWOPTIONS_H

@class NSArray, UIColor;

#import <Foundation/Foundation.h>


@interface JFXOverlayEffectDebugViewOptions : NSObject

@property (retain, nonatomic) NSArray *cornerPointColors; // ivar: _cornerPointColors
@property (retain, nonatomic) UIColor *documentBoundingBoxColor; // ivar: _documentBoundingBoxColor
@property (retain, nonatomic) UIColor *hitAreaBoundingBoxColor; // ivar: _hitAreaBoundingBoxColor
@property (retain, nonatomic) NSArray *hitAreaPointColors; // ivar: _hitAreaPointColors
@property (retain, nonatomic) UIColor *midpointColor; // ivar: _midpointColor
@property (retain, nonatomic) UIColor *objectAlignedBoundingBoxColor; // ivar: _objectAlignedBoundingBoxColor
@property (retain, nonatomic) UIColor *originCrosshairColor; // ivar: _originCrosshairColor
@property (retain, nonatomic) UIColor *outputROIColor; // ivar: _outputROIColor
@property (retain, nonatomic) UIColor *overlayCenterColor; // ivar: _overlayCenterColor
@property (nonatomic) BOOL showAdditionalRects; // ivar: _showAdditionalRects
@property (nonatomic) BOOL showCornerPoints; // ivar: _showCornerPoints
@property (nonatomic) BOOL showDocumentBoundingBox; // ivar: _showDocumentBoundingBox
@property (nonatomic) BOOL showFaceRect; // ivar: _showFaceRect
@property (nonatomic) BOOL showHitAreaBoundingBox; // ivar: _showHitAreaBoundingBox
@property (nonatomic) BOOL showHitAreaPoints; // ivar: _showHitAreaPoints
@property (nonatomic) BOOL showMidpoint; // ivar: _showMidpoint
@property (nonatomic) BOOL showObjectAlignedBoundingBox; // ivar: _showObjectAlignedBoundingBox
@property (nonatomic) BOOL showTapPoints; // ivar: _showTapPoints
@property (nonatomic) BOOL showTextBoundingBoxes; // ivar: _showTextBoundingBoxes
@property (nonatomic) BOOL showTextCornerPoints; // ivar: _showTextCornerPoints
@property (retain, nonatomic) NSArray *textBoundingBoxColors; // ivar: _textBoundingBoxColors
@property (retain, nonatomic) NSArray *textCornerPointColors; // ivar: _textCornerPointColors


+(id)debugViewOptionsWithDictionary:(id)arg0 ;
-(id)description;
-(id)init;


@end


#endif