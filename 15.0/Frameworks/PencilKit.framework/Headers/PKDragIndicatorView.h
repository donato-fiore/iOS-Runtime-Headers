// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDRAGINDICATORVIEW_H
#define PKDRAGINDICATORVIEW_H

@class UIView, NSString;
@protocol PKPaletteEdgeLocating;



@interface PKDragIndicatorView : UIView <PKPaletteEdgeLocating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger edgeLocation; // ivar: _edgeLocation
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;


@end


#endif