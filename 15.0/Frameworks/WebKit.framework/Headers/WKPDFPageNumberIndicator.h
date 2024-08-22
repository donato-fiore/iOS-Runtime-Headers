// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKPDFPAGENUMBERINDICATOR_H
#define WKPDFPAGENUMBERINDICATOR_H

@class UIView;



@interface WKPDFPageNumberIndicator : UIView {
    RetainPtr<UILabel> _label;
    RetainPtr<_UIBackdropView> _backdropView;
    RetainPtr<NSTimer> _timer;
    BOOL _hasValidPageCountAndCurrentPage;
}


@property (nonatomic) unsigned int currentPageNumber; // ivar: _currentPageNumber
@property (nonatomic) unsigned int pageCount; // ivar: _pageCount


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_makeRoundedCorners;
-(void)_updateLabel;
-(void)dealloc;
-(void)hide;
-(void)hide:(id)arg0 ;
-(void)moveToPoint:(struct CGPoint )arg0 animated:(BOOL)arg1 ;
-(void)show;


@end


#endif