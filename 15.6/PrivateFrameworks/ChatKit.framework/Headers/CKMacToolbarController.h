// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKMACTOOLBARCONTROLLER_H
#define CKMACTOOLBARCONTROLLER_H

@class UIViewController, NSString, UIView, UIVisualEffectView, NSMutableDictionary, UIWindowScene;
@protocol CKMacToolbarViewDelegate, CKMacToolbarItemProvider;



@interface CKMacToolbarController : UIViewController <CKMacToolbarViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isInStandaloneWindow; // ivar: _isInStandaloneWindow
@property (nonatomic) CGFloat preferredPrimaryHeight; // ivar: _preferredPrimaryHeight
@property (nonatomic) CGFloat preferredSecondaryHeight; // ivar: _preferredSecondaryHeight
@property (retain, nonatomic) NSObject<CKMacToolbarItemProvider> *primaryItemProvider; // ivar: _primaryItemProvider
@property (weak, nonatomic) UIView *primaryProvidedVirtualView; // ivar: _primaryProvidedVirtualView
@property (readonly, nonatomic) UIVisualEffectView *primaryVirtualBackgroundView; // ivar: _primaryVirtualBackgroundView
@property (readonly, weak, nonatomic) NSString *sceneSessionIdentifier; // ivar: _sceneSessionIdentifier
@property (retain, nonatomic) NSObject<CKMacToolbarItemProvider> *secondaryItemProvider; // ivar: _secondaryItemProvider
@property (weak, nonatomic) UIView *secondaryProvidedVirtualView; // ivar: _secondaryProvidedVirtualView
@property (readonly, nonatomic) UIVisualEffectView *secondaryVirtualBackgroundView; // ivar: _secondaryVirtualBackgroundView
@property (nonatomic) BOOL shouldDrawPrimaryBlur; // ivar: _shouldDrawPrimaryBlur
@property (nonatomic) BOOL shouldDrawSecondaryBlur; // ivar: _shouldDrawSecondaryBlur
@property (nonatomic) CGFloat splitViewDividerXPosition; // ivar: _splitViewDividerXPosition
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *toolbarItemCache; // ivar: _toolbarItemCache
@property (readonly, weak, nonatomic) UIWindowScene *windowScene; // ivar: _windowScene


+(id)defaultSecondaryItemIdentifiers;
+(id)primaryItemIdentifiersFullWindow;
+(id)primaryItemIdentifiersStandaloneWindow;
-(BOOL)__im_ff_isExpanseEnabled;
-(BOOL)_shouldDisAllowTouchesToPassForProviderType:(NSInteger)arg0 ;
-(BOOL)_updateFrameWithPreferredHeightsForFrame:(struct CGRect )arg0 ;
-(BOOL)macToolbarView:(id)arg0 shouldAllowTouchesForPoint:(struct CGPoint )arg1 andEvent:(id)arg2 ;
-(BOOL)reparentToolbarItemsForProvider:(id)arg0 ;
-(CGFloat)_getPreferredHeightForProviderType:(NSInteger)arg0 withDefaultHeight:(CGFloat)arg1 ;
-(NSInteger)_providerTypeForItemIdentifier:(id)arg0 ;
-(NSInteger)_providerTypeForPointInsideVirtualView:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)_cachedVirtualViewForProviderType:(NSInteger)arg0 ;
-(id)_providerForType:(NSInteger)arg0 ;
-(id)_virtualBackgroundViewForProviderType:(NSInteger)arg0 ;
-(id)initWithScene:(id)arg0 connectingToSession:(id)arg1 inStandaloneWindow:(BOOL)arg2 ;
-(struct CGRect )alignmentRectForItemWithIdentifier:(id)arg0 ;
-(void)_setVirtualView:(id)arg0 forProviderType:(NSInteger)arg1 ;
-(void)_sizeMetricsDidChange;
-(void)_updateBackgroundViewsRefreshingViewHeights:(BOOL)arg0 ;
-(void)_updateVirtualViewForProviderType:(NSInteger)arg0 ;
-(void)loadView;
-(void)reloadToolbarItems;
-(void)removeItemProvider:(id)arg0 ;
-(void)removeItemProviders;
-(void)removeToolbarItems;
-(void)removeVirtualViewForProvider:(id)arg0 ;
-(void)updateVirtualViewForProvider:(id)arg0 ;
-(void)updateWithFrame:(struct CGRect )arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif