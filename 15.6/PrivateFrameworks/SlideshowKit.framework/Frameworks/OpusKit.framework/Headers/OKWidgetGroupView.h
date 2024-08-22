// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKWIDGETGROUPVIEW_H
#define OKWIDGETGROUPVIEW_H

@class NSArray, NSMutableDictionary, NSString, OFUIView;
@protocol OKWidgetViewCollection, OKWidgetGroupViewExports;


#import "OKWidgetView.h"
#import "OKTransition.h"

@interface OKWidgetGroupView : OKWidgetView <OKWidgetViewCollection, OKWidgetGroupViewExports>

 {
    NSInteger _index;
    NSArray *_items;
    NSMutableDictionary *_itemWidgetViews;
    OKWidgetView *_currentWidgetView;
    OKTransition *_transition;
    NSString *_switchActionScript;
    BOOL _autoplay;
    BOOL _loop;
    CGFloat _itemDuration;
    BOOL _isInTransition;
    UIEdgeInsets _itemEdgeInsets;
    OFUIView *_itemContainerView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPlaying; // ivar: _isPlaying
@property (readonly) Class superclass;


+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(BOOL)prepareForDisplay:(BOOL)arg0 ;
-(BOOL)prepareForUnload:(BOOL)arg0 ;
-(BOOL)prepareForWarmup:(BOOL)arg0 ;
-(NSInteger)rotatedIndexForIndex:(NSInteger)arg0 ;
-(NSInteger)settingIndex;
-(NSUInteger)collectionItemsCount;
-(id)_nextWidgetView;
-(id)_previousWidgetView;
-(id)_widgetViewForIndex:(NSInteger)arg0 ;
-(id)collectionItemAtIndexPath:(id)arg0 ;
-(id)collectionItemForName:(id)arg0 ;
-(id)collectionItemsNames;
-(id)initWithWidget:(id)arg0 ;
-(id)layoutSettingsKeys;
-(id)settingObjectForKey:(id)arg0 ;
-(id)settingTransition;
-(id)valueForUndefinedKey:(id)arg0 ;
-(struct CGRect )itemContainerRect;
-(struct UIEdgeInsets )settingItemEdgeInsets;
-(void)_gotoIndex:(NSInteger)arg0 ;
-(void)_gotoNextIndex;
-(void)_jsGotoIndex:(NSInteger)arg0 ;
-(void)_jsTransitionToIndex:(NSInteger)arg0 forward:(BOOL)arg1 andLocation:(struct CGPoint )arg2 completionHandler:(id)arg3 ;
-(void)_jsTransitionToIndex:(NSInteger)arg0 withTransition:(id)arg1 completionHandler:(id)arg2 ;
-(void)_play;
-(void)_prepareAllForUnload:(BOOL)arg0 except:(id)arg1 ;
-(void)_reloadWidgetViews;
-(void)_stop;
-(void)_transitionToIndex:(NSInteger)arg0 forward:(BOOL)arg1 andLocation:(struct CGPoint )arg2 completionHandler:(id)arg3 ;
-(void)_transitionToIndex:(NSInteger)arg0 withTransition:(id)arg1 completionHandler:(id)arg2 ;
-(void)_updateDisplayedWidgetViews;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForRefresh;
-(void)prepareForReload;
-(void)setAntialiasing:(BOOL)arg0 ;
-(void)setSettingAutoplay:(BOOL)arg0 ;
-(void)setSettingIndex:(NSInteger)arg0 ;
-(void)setSettingItemDuration:(CGFloat)arg0 ;
-(void)setSettingItemEdgeInsets:(struct UIEdgeInsets )arg0 ;
-(void)setSettingItems:(id)arg0 ;
-(void)setSettingLoop:(BOOL)arg0 ;
-(void)setSettingSwitchActionScript:(id)arg0 ;
-(void)setSettingTransition:(id)arg0 ;


@end


#endif