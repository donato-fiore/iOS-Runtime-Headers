// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPALETTEHANDWRITINGTOOLVIEW_H
#define PKPALETTEHANDWRITINGTOOLVIEW_H

@class NSString, UILabel, NSLayoutConstraint;
@protocol PKPaletteHandwritingTool, PKPaletteErasingTool, PKPaletteInkingTool;


#import "PKPaletteToolView.h"

@interface PKPaletteHandwritingToolView : PKPaletteToolView <PKPaletteHandwritingTool>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PKPaletteErasingTool> *erasingTool;
@property (readonly, nonatomic) NSObject<PKPaletteHandwritingTool> *handwritingTool;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PKPaletteInkingTool> *inkingTool;
@property (copy, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (nonatomic) BOOL needsUpdateTitleLabel; // ivar: _needsUpdateTitleLabel
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *toolIdentifier;
@property (retain, nonatomic) UILabel *toolLabel; // ivar: _toolLabel
@property (retain, nonatomic) NSLayoutConstraint *toolLabelCenterXConstraint; // ivar: _toolLabelCenterXConstraint
@property (retain, nonatomic) NSLayoutConstraint *toolLabelCenterYConstraint; // ivar: _toolLabelCenterYConstraint


-(id)init;
-(id)initWithToolIdentifier:(id)arg0 ;
-(void)_updateUI;
-(void)setEdgeLocation:(NSUInteger)arg0 ;
-(void)setScalingFactor:(CGFloat)arg0 ;
-(void)updateConstraints;


@end


#endif