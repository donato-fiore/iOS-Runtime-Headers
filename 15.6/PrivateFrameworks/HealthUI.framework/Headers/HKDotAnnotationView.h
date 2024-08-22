// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKDOTANNOTATIONVIEW_H
#define HKDOTANNOTATIONVIEW_H

@class MKAnnotationView, UIColor;



@interface HKDotAnnotationView : MKAnnotationView

@property (retain, nonatomic) UIColor *dotColor; // ivar: _dotColor


-(id)initWithAnnotation:(id)arg0 reuseIdentifier:(id)arg1 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif