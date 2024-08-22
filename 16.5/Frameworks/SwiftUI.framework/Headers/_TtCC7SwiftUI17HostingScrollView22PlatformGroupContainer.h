// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCC7SWIFTUI17HOSTINGSCROLLVIEW22PLATFORMGROUPCONTAINER_H
#define _TTCC7SWIFTUI17HOSTINGSCROLLVIEW22PLATFORMGROUPCONTAINER_H

@class UIView, NSArray;
@protocol UIFocusItem, UIFocusItemContainer, _UIFocusRegionContainer;



@interface _TtCC7SwiftUI17HostingScrollView22PlatformGroupContainer : UIView <UIFocusItem, UIFocusItemContainer, _UIFocusRegionContainer>

 {
    ? scrollView;
    ? _focusableBounds;
    ? _focusableFillerBounds;
    ? _focusableBorder;
    ? fillerItems;
    ? requestedFocusItem;
}


@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;


+(BOOL)_supportsInvalidatingFocusCache;
-(id)_childFocusRegionsInRect:(struct CGRect )arg0 inCoordinateSpace:(id)arg1 ;
-(id)focusItemsInRect:(struct CGRect )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;


@end


#endif