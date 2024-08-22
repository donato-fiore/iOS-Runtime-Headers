// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NAUICONTENTSIZELAYOUTCONSTRAINT_H
#define NAUICONTENTSIZELAYOUTCONSTRAINT_H

@class NSLayoutConstraint, NSString;


#import "NAUITextStyleDescriptor.h"

@interface NAUIContentSizeLayoutConstraint : NSLayoutConstraint {
    id *_autoitem;
    id *_preferredContentSizeDidChangeObserver;
    BOOL _isConstantUpdatingConstraint;
    NAUITextStyleDescriptor *_dynamicTextStyleDescriptor;
    BOOL _allowsAccessibilityTextStyleSizes;
    CGFloat _textStyleDefaultBodyLeading;
}


@property (nonatomic) CGFloat additionalConstant; // ivar: _additionalConstant
@property (nonatomic) BOOL autoUpdatingConstantShrinks; // ivar: _autoUpdatingConstantShrinks
@property (copy, nonatomic) id *constantLoadingBlock; // ivar: _constantLoadingBlock
@property (nonatomic) CGFloat defaultConstant; // ivar: _defaultConstant
@property (copy, nonatomic) NSString *textStyle; // ivar: _textStyle


+(CGFloat)_maximumWidthOfStrings:(id)arg0 withFont:(id)arg1 ;
+(id)_constraintForAutoitem:(id)arg0 constrainedItem:(id)arg1 attribute:(NSInteger)arg2 relatedBy:(NSInteger)arg3 toItem:(id)arg4 attribute:(NSInteger)arg5 multiplier:(CGFloat)arg6 defaultConstant:(CGFloat)arg7 additionalConstant:(CGFloat)arg8 initialize:(BOOL)arg9 ;
+(id)baselineConstraintForAutoitem:(id)arg0 relation:(NSInteger)arg1 toView:(id)arg2 attribute:(NSInteger)arg3 defaultConstant:(CGFloat)arg4 ;
+(id)baselineConstraintForView:(id)arg0 attribute:(NSInteger)arg1 relation:(NSInteger)arg2 toAutoitem:(id)arg3 defaultConstant:(CGFloat)arg4 ;
+(id)constraintForAutoitem:(id)arg0 additionalConstant:(CGFloat)arg1 constantLoadingBlock:(id)arg2 ;
+(id)constraintForAutoitem:(id)arg0 additionalConstant:(CGFloat)arg1 constantWidthSizingStringsLoadingBlock:(id)arg2 ;
+(id)constraintForAutoitem:(id)arg0 attribute:(NSInteger)arg1 relatedBy:(NSInteger)arg2 toItem:(id)arg3 attribute:(NSInteger)arg4 multiplier:(CGFloat)arg5 defaultConstant:(CGFloat)arg6 ;
+(id)constraintForAutoitem:(id)arg0 constrainedItem:(id)arg1 attribute:(NSInteger)arg2 relatedBy:(NSInteger)arg3 toItem:(id)arg4 attribute:(NSInteger)arg5 multiplier:(CGFloat)arg6 defaultConstant:(CGFloat)arg7 ;
-(CGFloat)_defaultConstantByFixingUpDefaultConstant:(CGFloat)arg0 ;
-(void)_forceUpdatePreferredContentSize;
-(void)_reloadPreferredContentSize:(BOOL)arg0 ;
-(void)_updatePreferredContentSize;
-(void)dealloc;


@end


#endif