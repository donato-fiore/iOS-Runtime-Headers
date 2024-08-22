// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCUIACTIVITYLISTCONTENTVIEW_H
#define FCUIACTIVITYLISTCONTENTVIEW_H

@class UIView, NSMutableArray, NSArray, UIView<FCUIActivityDisplaying>, NSString;
@protocol FCUIContentSizeCategoryAdjusting;



@interface FCUIActivityListContentView : UIView <FCUIContentSizeCategoryAdjusting>

 {
    NSMutableArray *_outgoingActivityViews;
    NSArray *_purgeableActivityViews;
    BOOL _headerViewValid;
    BOOL _footerViewValid;
}


@property (copy, nonatomic) NSArray *activityViews; // ivar: _activityViews
@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (nonatomic) CGSize collapsedSize; // ivar: _collapsedSize
@property (retain, nonatomic) UIView<FCUIActivityDisplaying> *compactActivityView; // ivar: _compactActivityView
@property (nonatomic, getter=isContentDetached) BOOL contentDetached; // ivar: _contentDetached
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFooterPinnedToBottom) BOOL footerPinnedToBottom; // ivar: _footerPinnedToBottom
@property (retain, nonatomic) UIView *footerView; // ivar: _footerView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;


-(BOOL)adjustForContentSizeCategoryChange;
-(id)_contentSizeCategoryAdjustingViews;
-(id)subviewFramesInBounds:(struct CGRect )arg0 ;
-(struct CGSize )_sizeThatFits:(struct CGSize )arg0 collapsedToPill:(BOOL)arg1 includingFooter:(BOOL)arg2 forceMeasurement:(BOOL)arg3 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFitsCollapsedToPill:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif