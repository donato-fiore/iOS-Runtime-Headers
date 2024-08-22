// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCCENTERINGSCROLLVIEW_H
#define NTKCCENTERINGSCROLLVIEW_H

@class UIScrollView, UIView, NSString;
@protocol UIScrollViewDelegate, NTKCCenteringScrollViewDelegate;



@interface NTKCCenteringScrollView : UIScrollView <UIScrollViewDelegate>

 {
    CGRect _originalCrop;
    UIEdgeInsets _minimumDisplayInsets;
}


@property (retain, nonatomic) UIView *centeredView; // ivar: _centeredView
@property (nonatomic) CGRect cropRect; // ivar: _cropRect
@property (readonly, nonatomic) CGFloat cropRectCushion; // ivar: _cropRectCushion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maximumZoomRatio; // ivar: _maximumZoomRatio
@property (nonatomic) CGSize minimumDisplaySize; // ivar: _minimumDisplaySize
@property (weak, nonatomic) NSObject<NTKCCenteringScrollViewDelegate> *ntk_delegate; // ivar: _ntk_delegate
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForZoomingInScrollView:(id)arg0 ;
-(void)_centerOnCrop;
-(void)_updateCrop;
-(void)_updateInsets;
-(void)_updateZoomScales;
-(void)safeAreaInsetsDidChange;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg0 withView:(id)arg1 atScale:(CGFloat)arg2 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillBeginZooming:(id)arg0 withView:(id)arg1 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif