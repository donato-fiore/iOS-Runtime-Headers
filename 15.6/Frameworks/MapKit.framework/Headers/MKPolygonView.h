// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPOLYGONVIEW_H
#define MKPOLYGONVIEW_H



#import "MKOverlayPathView.h"
#import "MKPolygon.h"

@interface MKPolygonView : MKOverlayPathView

@property (readonly, nonatomic) MKPolygon *polygon;


-(id)initWithPolygon:(id)arg0 ;
-(void)createPath;
-(void)fillPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 ;
-(void)strokePath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 ;


@end


#endif