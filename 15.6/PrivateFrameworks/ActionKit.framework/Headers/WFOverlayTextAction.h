// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFOVERLAYTEXTACTION_H
#define WFOVERLAYTEXTACTION_H

@class WFAction;



@interface WFOverlayTextAction : WFAction

@property (nonatomic) CGFloat imageHeight; // ivar: _imageHeight
@property (nonatomic) CGFloat imageWidth; // ivar: _imageWidth


-(BOOL)strokeEnabled;
-(BOOL)useProportionalSizing;
-(CGFloat)boxWidth;
-(CGFloat)fontSize;
-(CGFloat)offset;
-(CGFloat)rotation;
-(CGFloat)strokeWidth;
-(CGFloat)xPosition;
-(CGFloat)yPosition;
-(NSInteger)textAlignment;
-(id)font;
-(id)fontDescriptor;
-(id)outlinedTextAttributes;
-(id)overlayImage:(id)arg0 ;
-(id)paragraphStyle;
-(id)parameterKeysIgnoredForParameterSummary;
-(id)strokeColor;
-(id)strokeWidthPercentage;
-(id)text;
-(id)textAttributes;
-(id)textColor;
-(id)textPosition;
-(struct CGRect )drawingRectForImage:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif