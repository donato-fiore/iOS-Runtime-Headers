// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTSTOREPAGEVIEWCONTROLLER_H
#define SUSCRIPTSTOREPAGEVIEWCONTROLLER_H

@class NSArray, NSNumber, NSString;


#import "SUScriptViewController.h"
#import "SUScriptSegmentedControl.h"

@interface SUScriptStorePageViewController : SUScriptViewController {
    NSArray *_initialURLStrings;
}


@property (readonly) NSArray *URLStrings;
@property (retain) id *URLs;
@property id *alwaysDispatchesScrollEvents;
@property BOOL doubleTapEnabled;
@property BOOL flashesScrollIndicators;
@property (readonly) NSInteger indicatorStyleGray;
@property (readonly) NSInteger indicatorStyleWhite;
@property id *inputViewObeysDOMFocus;
@property NSInteger loadingIndicatorStyle;
@property (retain) id *loadingTextColor;
@property (retain) id *loadingTextShadowColor;
@property id *loadsWhenHidden;
@property (retain) id *placeholderBackgroundStyle;
@property (readonly) id *rootObject;
@property BOOL scrollingEnabled;
@property (retain) SUScriptSegmentedControl *segmentedControl;
@property BOOL shouldInvalidateForLowMemory;
@property BOOL shouldLoadProgressively;
@property id *shouldShowFormAccessory;
@property BOOL showsBackgroundShadow;
@property id *showsHorizontalScrollIndicator;
@property id *showsVerticalScrollIndicator;
@property (retain) NSNumber *timeoutInterval;
@property (retain) NSString *userInfo;


+(BOOL)copyURLStrings:(*id)arg0 forValue:(id)arg1 ;
+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(BOOL)_isSegmentedControlValid:(id)arg0 ;
-(id)_className;
-(id)_copyURLsFromURLStrings:(id)arg0 ;
-(id)_pathForWebArchiveWithIdentifier:(id)arg0 inDirectory:(id)arg1 ;
-(id)_storePageViewController;
-(id)attributeKeys;
-(id)init;
-(id)initWithURLStrings:(id)arg0 ;
-(id)loadWebArchiveWithIdentifier:(id)arg0 fromDirectory:(id)arg1 ;
-(id)newNativeViewController;
-(id)saveWebArchiveWithIdentifier:(id)arg0 toDirectory:(id)arg1 ;
-(id)scriptAttributeKeys;
-(void)_setValue:(id)arg0 forScriptPropertyKey:(id)arg1 ;
-(void)applyURLStrings:(id)arg0 toViewController:(id)arg1 ;
-(void)reloadWithCallback:(id)arg0 ;
-(void)setNativeViewController:(id)arg0 ;
-(void)setScrollEdgeInsetsWithTop:(CGFloat)arg0 left:(CGFloat)arg1 bottom:(CGFloat)arg2 right:(CGFloat)arg3 ;


@end


#endif