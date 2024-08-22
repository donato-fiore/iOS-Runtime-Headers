// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCOMPLICATIONLAYOUTRULE_H
#define NTKCOMPLICATIONLAYOUTRULE_H



#import "NTKLayoutRule.h"

@interface NTKComplicationLayoutRule : NTKLayoutRule

@property (nonatomic) CGAffineTransform contentTransform; // ivar: _contentTransform
@property (nonatomic) CGAffineTransform editingTransform; // ivar: _editingTransform
@property (readonly, nonatomic) UIEdgeInsets keylinePadding; // ivar: _keylinePadding


+(id)layoutRuleForDevice:(id)arg0 withReferenceFrame:(struct CGRect )arg1 horizontalLayout:(NSInteger)arg2 verticalLayout:(NSInteger)arg3 keylinePadding:(struct UIEdgeInsets )arg4 ;
+(id)layoutRuleForDevice:(id)arg0 withReferenceFrame:(struct CGRect )arg1 horizontalLayout:(NSInteger)arg2 verticalLayout:(NSInteger)arg3 keylinePadding:(struct UIEdgeInsets )arg4 clip:(BOOL)arg5 ;
+(id)layoutRuleForDevice:(id)arg0 withReferenceFrame:(struct CGRect )arg1 horizontalLayout:(NSInteger)arg2 verticalLayout:(NSInteger)arg3 keylinePadding:(struct UIEdgeInsets )arg4 clip:(BOOL)arg5 contentTransform:(struct CGAffineTransform )arg6 ;
+(id)layoutRuleForDevice:(id)arg0 withReferenceFrame:(struct CGRect )arg1 horizontalLayout:(NSInteger)arg2 verticalLayout:(NSInteger)arg3 keylinePadding:(struct UIEdgeInsets )arg4 clip:(BOOL)arg5 editingTransform:(struct CGAffineTransform )arg6 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initForDevice:(id)arg0 ;


@end


#endif