// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKMAPBALLOONVIEW_H
#define CKMAPBALLOONVIEW_H

@class MKMarkerAnnotationView;


#import "CKTitledImageBalloonView.h"

@interface CKMapBalloonView : CKTitledImageBalloonView

@property (retain, nonatomic) MKMarkerAnnotationView *annotationView; // ivar: _annotationView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif