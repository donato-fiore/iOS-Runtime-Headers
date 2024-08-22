// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKUTILITYCIRCULARCOMPLICATIONVIEW_H
#define NTKUTILITYCIRCULARCOMPLICATIONVIEW_H

@class NSString;
@protocol NTKContainerViewLayoutDelegate;


#import "NTKUtilityComplicationView.h"
#import "NTKContainerView.h"

@interface NTKUtilityCircularComplicationView : NTKUtilityComplicationView <NTKContainerViewLayoutDelegate>



@property (readonly, nonatomic) NTKContainerView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)layoutOverride;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_layoutContentView;
-(void)_updateEditingRotationAngle;
-(void)layoutContainerView:(id)arg0 ;
-(void)layoutSubviews;
-(void)setEditing:(BOOL)arg0 ;
-(void)setEditingRotationAngle:(CGFloat)arg0 ;


@end


#endif