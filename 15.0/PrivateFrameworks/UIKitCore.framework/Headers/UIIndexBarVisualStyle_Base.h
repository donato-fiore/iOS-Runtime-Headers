// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIINDEXBARVISUALSTYLE_BASE_H
#define UIINDEXBARVISUALSTYLE_BASE_H

@class NSString;
@protocol UIIndexBarVisualStyle;

#import <Foundation/Foundation.h>

#import "UIIndexBarView.h"

@interface UIIndexBarVisualStyle_Base : NSObject <UIIndexBarVisualStyle>



@property (readonly, nonatomic) BOOL canBecomeFocused;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL expanded;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIIndexBarView *indexBarView; // ivar: _indexBarView
@property (readonly, nonatomic) CGFloat minLineHeight;
@property (readonly, nonatomic) BOOL overlay;
@property (readonly) Class superclass;


-(NSInteger)_indexForEntryAtPoint:(struct CGPoint )arg0 ;
-(id)displayEntryFromEntry:(id)arg0 ;
-(id)initWithView:(id)arg0 ;
-(struct CGRect )_visibleBoundsForRect:(struct CGRect )arg0 stride:(*CGFloat)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif