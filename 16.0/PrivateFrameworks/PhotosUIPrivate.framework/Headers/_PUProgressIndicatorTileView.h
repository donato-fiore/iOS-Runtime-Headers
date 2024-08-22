// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PUPROGRESSINDICATORTILEVIEW_H
#define _PUPROGRESSINDICATORTILEVIEW_H

@class UIView;
@protocol _PUProgressIndicatorTileViewDelegate;



@interface _PUProgressIndicatorTileView : UIView {
    ? _delegateFlags;
}


@property (weak, nonatomic) UIView *extraHittableSubview; // ivar: _extraHittableSubview
@property (nonatomic) BOOL showingErrorProgressView; // ivar: _showingErrorProgressView
@property (weak, nonatomic) NSObject<_PUProgressIndicatorTileViewDelegate> *traitCollectionDelegate; // ivar: _traitCollectionDelegate


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif