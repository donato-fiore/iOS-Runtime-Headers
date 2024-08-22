// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXFILLVIEW_H
#define SXFILLVIEW_H

@class UIView;
@protocol SXDraggable;


#import "SXFill.h"

@interface SXFillView : UIView

@property (nonatomic) CGRect contentFrame;
@property (readonly, nonatomic) NSObject<SXDraggable> *dragable; // ivar: _dragable
@property (readonly, nonatomic) SXFill *fill; // ivar: _fill
@property (nonatomic) CGRect originalFrame; // ivar: _originalFrame


-(id)initWithFill:(id)arg0 ;
-(struct CGRect )fillFrameWithBoundingSize:(struct CGSize )arg0 ;
-(void)load;


@end


#endif