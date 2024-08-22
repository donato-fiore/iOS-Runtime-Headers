// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TMLUITRAITCOLLECTION_H
#define TMLUITRAITCOLLECTION_H

@class UITraitCollection, NSMutableDictionary, NSMutableOrderedSet, NSArray, NSString, UIView;

#import <Foundation/Foundation.h>


@interface TMLUITraitCollection : NSObject {
    UITraitCollection *_traitCollection;
    NSMutableDictionary *_properties;
    NSMutableOrderedSet *_propertyKeys;
}


@property (copy, nonatomic) NSArray *constraints; // ivar: _constraintsValue
@property (nonatomic) CGFloat displayScale; // ivar: _displayScale
@property (nonatomic) NSInteger forceTouchCapability; // ivar: _forceTouchCapability
@property (nonatomic) NSInteger horizontalSizeClass; // ivar: _horizontalSizeClass
@property (retain, nonatomic) NSArray *preferredContentSizeCategories; // ivar: _preferredContentSizeCategories
@property (retain, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (readonly, nonatomic) NSUInteger specificity; // ivar: _specificity
@property (copy, nonatomic) NSArray *subviews; // ivar: _subviewsValue
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) NSInteger userInterfaceIdiom; // ivar: _userInterfaceIdiom
@property (nonatomic) NSInteger userInterfaceStyle; // ivar: _userInterfaceStyle
@property (nonatomic) NSInteger verticalSizeClass; // ivar: _verticalSizeClass
@property (readonly, nonatomic) UIView *view;


+(id)currentTraitCollection:(id)arg0 ;
+(id)defaultCollection;
+(id)traitEnvironment:(id)arg0 willTransitionToTraitCollection:(id)arg1 fromPreviousTraitCollection:(id)arg2 ;
-(id)init;
-(void)applyToTraitEnvironment:(id)arg0 ;
-(void)setTMLValue:(id)arg0 forKeyPath:(id)arg1 ;
-(void)tmlDispose;


@end


#endif