// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKCIRCLEVIEW_H
#define MKCIRCLEVIEW_H



#import "MKOverlayPathView.h"
#import "MKCircle.h"

@interface MKCircleView : MKOverlayPathView

@property (readonly, nonatomic) MKCircle *circle;


-(id)initWithCircle:(id)arg0 ;
-(void)createPath;


@end


#endif