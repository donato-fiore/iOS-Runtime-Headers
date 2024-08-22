// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICOLLECTIONVIEWLISTHEADERFOOTER_H
#define _UICOLLECTIONVIEWLISTHEADERFOOTER_H

@protocol _UIContentViewConfiguration, UITableConstants;


#import "UICollectionReusableView.h"
#import "_UISystemBackgroundView.h"
#import "_UIBackgroundViewConfiguration.h"
#import "UIView.h"

@interface _UICollectionViewListHeaderFooter : UICollectionReusableView {
    ? _headerFooterFlags;
    Class _contentViewConfigurationClass;
    id *_contentViewConfigurationProvider;
    _UISystemBackgroundView *_systemBackgroundView;
    id *_backgroundViewConfigurationProvider;
}


@property (nonatomic, getter=_automaticallyUpdatesBackgroundViewConfiguration, setter=_setAutomaticallyUpdatesBackgroundViewConfiguration:) BOOL _automaticallyUpdatesBackgroundViewConfiguration;
@property (nonatomic, getter=_automaticallyUpdatesContentViewConfiguration, setter=_setAutomaticallyUpdatesContentViewConfiguration:) BOOL _automaticallyUpdatesContentViewConfiguration;
@property (copy, nonatomic, getter=_backgroundViewConfiguration, setter=_setBackgroundViewConfiguration:) _UIBackgroundViewConfiguration *_backgroundViewConfiguration;
@property (copy, nonatomic, getter=_backgroundViewConfigurationProvider, setter=_setBackgroundViewConfigurationProvider:) id *_backgroundViewConfigurationProvider;
@property (copy, nonatomic, getter=_contentViewConfiguration, setter=_setContentViewConfiguration:) NSObject<_UIContentViewConfiguration> *_contentViewConfiguration;
@property (copy, nonatomic, getter=_contentViewConfigurationProvider, setter=_setContentViewConfigurationProvider:) id *_contentViewConfigurationProvider;
@property (readonly, nonatomic) NSUInteger _viewConfigurationState;
@property (readonly, nonatomic, getter=_constants) NSObject<UITableConstants> *constants; // ivar: _constants
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic, getter=_contentViewInsets) UIEdgeInsets contentViewInsets; // ivar: _contentViewInsets


-(NSInteger)_styleFromLayoutAttributes:(id)arg0 ;
-(id)_defaultBackgroundViewConfigurationProvider:(SEL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_contentTargetSizeForTargetSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 forUseWithSizeThatFits:(BOOL)arg3 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)_applyBackgroundViewConfiguration:(id)arg0 ;
-(void)_didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)_layoutContentView;
-(void)_layoutSystemBackgroundView;
-(void)_performConfigurationStateUpdate;
-(void)_populateArchivedSubviews:(id)arg0 ;
-(void)_resetBackgroundColor;
-(void)_resetBackgroundViewConfiguration;
-(void)_setLayoutAttributes:(id)arg0 ;
-(void)_setNeedsConfigurationStateUpdate;
-(void)_updateBackgroundViewConfigurationForState:(NSUInteger)arg0 ;
-(void)_updateConstants;
-(void)_updateContentViewConfigurationForState:(NSUInteger)arg0 ;
-(void)_updateDefaultBackgroundAppearance;
-(void)_updateViewConfigurationsWithState:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)setUserInteractionEnabled:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif