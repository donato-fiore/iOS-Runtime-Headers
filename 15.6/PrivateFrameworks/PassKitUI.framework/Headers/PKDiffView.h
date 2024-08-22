// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDIFFVIEW_H
#define PKDIFFVIEW_H

@class UIView, CAShapeLayer;



@interface PKDiffView : UIView {
    CAShapeLayer *_shapeLayer;
}




-(void)dealloc;
-(void)performStrokeWithCompletion:(id)arg0 ;
-(void)updateShapeLayer;


@end


#endif