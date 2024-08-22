// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFPRIVACYREPORTOVERVIEWCELLVIEW_H
#define SFPRIVACYREPORTOVERVIEWCELLVIEW_H

@class UIView, NSString;
@protocol SFPrivacyReportGridItem, SFPrivacyReportGridItemDelegate;



@interface SFPrivacyReportOverviewCellView : UIView <SFPrivacyReportGridItem>

 {
    UIView *_topHairline;
    UIView *_bottomHairline;
    UIView *_trailingHairline;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFPrivacyReportGridItemDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger gridPosition; // ivar: _gridPosition
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maxWidth; // ivar: _maxWidth
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesInsetStyle; // ivar: _usesInsetStyle


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateHairlinesIfNeeded;
-(void)_updateLayoutMargins;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif