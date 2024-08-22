// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSPOINTOFINTERESTANNOTATIONVIEW_H
#define CPSPOINTOFINTERESTANNOTATIONVIEW_H

@class MKAnnotationView, CPImageSet;



@interface CPSPointOfInterestAnnotationView : MKAnnotationView

@property (retain, nonatomic) CPImageSet *imageSet; // ivar: _imageSet


+(id)balloonWithText:(id)arg0 traitCollection:(id)arg1 ;
+(struct CGPath *)_createPathForBalloonRadius:(CGFloat)arg0 tailLength:(CGFloat)arg1 ;
-(id)_defaultPOI;
-(id)initWithAnnotation:(id)arg0 reuseIdentifier:(id)arg1 ;
-(void)_configure;
-(void)prepareForDisplay;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)update;


@end


#endif