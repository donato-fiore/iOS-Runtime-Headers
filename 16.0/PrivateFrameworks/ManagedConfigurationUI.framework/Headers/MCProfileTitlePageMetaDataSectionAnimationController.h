// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCPROFILETITLEPAGEMETADATASECTIONANIMATIONCONTROLLER_H
#define MCPROFILETITLEPAGEMETADATASECTIONANIMATIONCONTROLLER_H

@class NSString, UIView, UITableView;
@protocol MCUIScrollAnimationResponder;

#import <Foundation/Foundation.h>

#import "MCProfileTitlePageMetaDataSectionController.h"

@interface MCProfileTitlePageMetaDataSectionAnimationController : NSObject <MCUIScrollAnimationResponder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIView *iconView; // ivar: _iconView
@property (nonatomic) CGRect iconViewOriginFrame; // ivar: _iconViewOriginFrame
@property (weak, nonatomic) UIView *orgView; // ivar: _orgView
@property (weak, nonatomic) MCProfileTitlePageMetaDataSectionController *sectionController; // ivar: _sectionController
@property (weak, nonatomic) UIView *subtitleView; // ivar: _subtitleView
@property (readonly) Class superclass;
@property (weak, nonatomic) UITableView *tableView; // ivar: _tableView
@property (nonatomic) CGRect titleLabelOriginFrame; // ivar: _titleLabelOriginFrame
@property (weak, nonatomic) UIView *titleView; // ivar: _titleView
@property (weak, nonatomic) UIView *topBar; // ivar: _topBar


-(BOOL)_putBackViewIfNeeded:(id)arg0 toView:(id)arg1 ;
-(BOOL)_relocateViewIfNeeded:(id)arg0 fromView:(id)arg1 toView:(id)arg2 ;
-(CGFloat)_alphaWithProgress:(CGFloat)arg0 keys:(id)arg1 values:(id)arg2 ;
-(NSUInteger)_binarySearch:(id)arg0 target:(CGFloat)arg1 ;
-(void)_animateView:(id)arg0 progress:(CGFloat)arg1 startFrame:(struct CGRect )arg2 endY:(CGFloat)arg3 endScale:(CGFloat)arg4 extraYOffset:(CGFloat)arg5 ;
-(void)startTrackingWithMetaDataSectionController:(id)arg0 topBar:(id)arg1 ;
-(void)updateProgressWithTranslationDistance:(CGFloat)arg0 referenceDistance:(CGFloat)arg1 isScrolling:(BOOL)arg2 ;


@end


#endif