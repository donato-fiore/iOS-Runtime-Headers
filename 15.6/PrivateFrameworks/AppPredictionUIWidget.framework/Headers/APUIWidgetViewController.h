// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APUIWIDGETVIEWCONTROLLER_H
#define APUIWIDGETVIEWCONTROLLER_H

@class UIViewController, NSString, ATXSuggestionLayout, ATXHomeScreenSuggestionClient, NSArray, ATXHomeScreenWidgetIdentifiable;



@interface APUIWidgetViewController : UIViewController

@property (nonatomic) BOOL effectiveViewVisibility; // ivar: _effectiveViewVisibility
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isCurrentlyVisible;
@property (retain, nonatomic) ATXSuggestionLayout *layout; // ivar: _layout
@property (nonatomic) BOOL stackVisible; // ivar: _stackVisible
@property (retain, nonatomic) ATXHomeScreenSuggestionClient *suggestionClient; // ivar: _suggestionClient
@property (retain, nonatomic) NSArray *suggestionIds; // ivar: _suggestionIds
@property (nonatomic, getter=isViewVisible) BOOL viewVisible; // ivar: _viewVisible
@property (retain, nonatomic) ATXHomeScreenWidgetIdentifiable *widgetIdentifiable; // ivar: _widgetIdentifiable


+(id)imageForIconSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
+(id)smartStackImageForIconSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(BOOL)matchesWidgetUniqueID:(id)arg0 stackID:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)_topWidgetDidAppear:(id)arg0 ;
-(void)_topWidgetDidDisappear:(id)arg0 ;
-(void)_updateViewVisibility;
-(void)dealloc;
-(void)logChangeWithNewSuggestionIds:(id)arg0 previousSuggestionIds:(id)arg1 suggestionClient:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif