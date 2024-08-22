// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUPRIMARYSTATEICONCONTENTVIEW_H
#define HUPRIMARYSTATEICONCONTENTVIEW_H

@class HFPrimaryStateIconDescriptor;


#import "HUIconContentView.h"

@interface HUPrimaryStateIconContentView : HUIconContentView

@property (readonly, nonatomic) HFPrimaryStateIconDescriptor *iconDescriptor;


-(void)tintColorDidChange;
-(void)updateColorsForDisplayStyle:(NSUInteger)arg0 ;
-(void)updateIconFromState:(NSInteger)arg0 toState:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)updateWithIconDescriptor:(id)arg0 displayStyle:(NSUInteger)arg1 animated:(BOOL)arg2 ;


@end


#endif