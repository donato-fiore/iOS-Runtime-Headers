// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSCRIPTSEGMENTEDCONTROL_H
#define SUSCRIPTSEGMENTEDCONTROL_H

@class NSArray, NSString, NSNumber;


#import "SUScriptObject.h"
#import "SUSegmentedControl.h"
#import "SUStorePageViewController.h"

@interface SUScriptSegmentedControl : SUScriptObject {
    NSArray *_segments;
    NSInteger _style;
}


@property (readonly, nonatomic) SUSegmentedControl *activeSegmentedControl;
@property (copy) NSString *cancelButtonTitle;
@property (readonly) NSUInteger controlStateDisabled;
@property (readonly) NSUInteger controlStateHighlighted;
@property (readonly) NSUInteger controlStateNormal;
@property (readonly) NSUInteger controlStateSelected;
@property NSInteger maximumNumberOfItems;
@property CGFloat maximumWidth;
@property (copy) NSString *moreListTitle;
@property (retain, nonatomic) SUSegmentedControl *nativeSegmentedControl;
@property (readonly, nonatomic) NSInteger nativeSelectedIndex;
@property (readonly) NSNumber *noSegmentIndex;
@property (readonly, nonatomic) NSArray *rawSegments;
@property (retain) id *segments;
@property (retain) NSNumber *selectedIndex;
@property (readonly) NSNumber *selectedSegmentIndex;
@property (copy) id *showsMoreListAutomatically;
@property (readonly, nonatomic) SUStorePageViewController *storePageViewController;
@property (retain) NSString *style;
@property (copy) id *tintColor;
@property NSInteger tintStyle;
@property (readonly) NSInteger tintStyleDark;
@property (readonly) NSInteger tintStyleDefault;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(NSInteger)_sectionsStyleForString:(id)arg0 ;
-(id)_className;
-(id)_newNativeSegmentedControl;
-(id)_newPageSectionGroupWithSegments:(id)arg0 ;
-(id)_newSegmentsFromPageSectionGroup:(id)arg0 ;
-(id)attributeKeys;
-(id)initWithPageSectionGroup:(id)arg0 ;
-(id)makeSegmentWithTitle:(id)arg0 userInfo:(id)arg1 ;
-(id)newPageSectionGroup;
-(id)scriptAttributeKeys;
-(id)titleColorForControlState:(NSUInteger)arg0 ;
-(id)titleShadowColorForControlState:(NSUInteger)arg0 ;
-(void)_reloadSegmentedControl:(id)arg0 withSegments:(id)arg1 ;
-(void)_reloadViewControllerPageSectionGroup;
-(void)_setColor:(id)arg0 forTitleTextAttribute:(id)arg1 controlState:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)hideMoreListAnimated:(BOOL)arg0 ;
-(void)setTitleColor:(id)arg0 forControlState:(NSUInteger)arg1 ;
-(void)setTitleShadowColor:(id)arg0 forControlState:(NSUInteger)arg1 ;
-(void)showMoreListAnimated:(BOOL)arg0 ;
-(void)showPopoverController:(id)arg0 fromSegmentIndex:(NSInteger)arg1 animated:(BOOL)arg2 ;


@end


#endif