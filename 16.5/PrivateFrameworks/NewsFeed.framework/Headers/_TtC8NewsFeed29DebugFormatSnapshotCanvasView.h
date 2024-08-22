// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8NEWSFEED29DEBUGFORMATSNAPSHOTCANVASVIEW_H
#define _TTC8NEWSFEED29DEBUGFORMATSNAPSHOTCANVASVIEW_H

@class UIView;



@interface _TtC8NewsFeed29DebugFormatSnapshotCanvasView : UIView {
    ? toolbarItems;
    ? contentView;
    ? _selectedSnapshotView;
    ? $__lazy_storage_$_rotateGesture;
    ? $__lazy_storage_$_translateGesture;
    ? $__lazy_storage_$_zoomGesture;
    ? rotateState;
    ? translateState;
    ? zoomState;
    ? hiddenSlider;
    ? depthSlider;
    ? snapshots;
    ? snapshotTransform;
}




-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)doDepthChangedWithSender:(id)arg0 ;
-(void)doHiddenChangedWithSender:(id)arg0 ;
-(void)doPerspectiveWithSender:(id)arg0 ;
-(void)doRotateWithGesture:(id)arg0 ;
-(void)doTranslateWithGesture:(id)arg0 ;
-(void)doZoomWithGesture:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif