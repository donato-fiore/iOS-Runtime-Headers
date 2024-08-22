// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIUITEMPLATEDSTACKSNIPPETVIEW_H
#define SIRIUITEMPLATEDSTACKSNIPPETVIEW_H

@class UIView, UIImageView, UILabel, NSMutableSet, NSMutableArray, UITapGestureRecognizer, NSString, NSArray;
@protocol SiriUITemplatedView, SiriUITemplatedStackSnippetViewDataSource, SiriUITemplatedStackSnippetViewDelegate;



@interface SiriUITemplatedStackSnippetView : UIView <SiriUITemplatedView>

 {
    UIView *_sashOverlayView;
    UIImageView *_sashImageView;
    UILabel *_sashTitleLabel;
    UILabel *_navigationTitleLabel;
    UIView *_touchInterceptView;
    NSMutableSet *_templateSubviews;
    NSMutableArray *_keylines;
    CGFloat _auxiliaryViewHeight;
    UITapGestureRecognizer *_tapRecognizer;
}


@property (readonly, nonatomic) UIView *auxiliaryView; // ivar: _auxiliaryView
@property (weak, nonatomic) NSObject<SiriUITemplatedStackSnippetViewDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SiriUITemplatedStackSnippetViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *stackedSubviews; // ivar: _stackedSubviews
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIEdgeInsets templatedContentMargins;


-(CGFloat)desiredHeight;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_handleTapGesture:(id)arg0 ;
-(void)_triggerLayoutAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)addTemplateSubview:(id)arg0 ;
-(void)adjustAuxiliaryViewHeight:(CGFloat)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)layoutSubviews;
-(void)reloadData;
-(void)templateSubviewWantsToBeRemovedFromHierarchy:(id)arg0 ;


@end


#endif