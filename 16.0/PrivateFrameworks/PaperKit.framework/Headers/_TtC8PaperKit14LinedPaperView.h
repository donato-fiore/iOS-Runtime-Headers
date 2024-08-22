// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8PAPERKIT14LINEDPAPERVIEW_H
#define _TTC8PAPERKIT14LINEDPAPERVIEW_H

@class UIView;
@protocol PKLinedPaperLayerDelegate;



@interface _TtC8PaperKit14LinedPaperView : UIView <PKLinedPaperLayerDelegate>

 {
    ? linedPaperLayer;
    ? linedPaper;
}


@property (nonatomic) CGAffineTransform drawingTransform; // ivar: drawingTransform


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)linedPaperLayerAttachmentContainerView:(id)arg0 ;
-(id)linedPaperLayerLinedPaper:(id)arg0 ;
-(id)linedPaperLayerTraitCollection:(id)arg0 ;


@end


#endif