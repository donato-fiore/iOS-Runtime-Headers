// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPUCONTENTSIZELAYOUTCONSTRAINT_H
#define MPUCONTENTSIZELAYOUTCONSTRAINT_H

@class NSLayoutConstraint, UILabel, NSString;


#import "MPUNotificationObserver.h"

@interface MPUContentSizeLayoutConstraint : NSLayoutConstraint {
    MPUNotificationObserver *_preferredContentSizeDidChangeObserver;
    CGFloat _textStyleDefaultLeading;
    BOOL _isBaselineConstraint;
    BOOL _isLineNumberConstraint;
    NSUInteger _numberOfLines;
    UILabel *_targetLabel;
}


@property (nonatomic) CGFloat defaultSizeConstant; // ivar: _defaultSizeConstant
@property (nonatomic) CGFloat fontSizeMultiplier; // ivar: _fontSizeMultiplier
@property (copy, nonatomic) NSString *textStyle; // ivar: _textStyle


+(id)constraintWithAutoupdatingBaselineOfView:(id)arg0 relation:(NSInteger)arg1 toView:(id)arg2 attribute:(NSInteger)arg3 withTextStyle:(id)arg4 multiplier:(CGFloat)arg5 nonStandardLeading:(CGFloat)arg6 ;
+(id)constraintWithAutoupdatingBaselineOfView:(id)arg0 relation:(NSInteger)arg1 toView:(id)arg2 attribute:(NSInteger)arg3 withTextStyle:(id)arg4 nonStandardLeading:(CGFloat)arg5 ;
+(id)constraintWithAutoupdatingBaselineOfView:(id)arg0 toView:(id)arg1 attribute:(NSInteger)arg2 withTextStyle:(id)arg3 nonStandardLeading:(CGFloat)arg4 ;
+(id)constraintWithItem:(id)arg0 attribute:(NSInteger)arg1 relatedBy:(NSInteger)arg2 toItem:(id)arg3 attribute:(NSInteger)arg4 multiplier:(CGFloat)arg5 autoupdatingConstantFromLabel:(id)arg6 textStyle:(id)arg7 numberOfLines:(NSUInteger)arg8 ;
+(id)contentSizeAutoupdatingConstraintWithItem:(id)arg0 attribute:(NSInteger)arg1 relatedBy:(NSInteger)arg2 toItem:(id)arg3 attribute:(NSInteger)arg4 multiplier:(CGFloat)arg5 textStyle:(id)arg6 defaultSizeConstant:(CGFloat)arg7 ;
-(void)_updatePreferredContentSize;


@end


#endif