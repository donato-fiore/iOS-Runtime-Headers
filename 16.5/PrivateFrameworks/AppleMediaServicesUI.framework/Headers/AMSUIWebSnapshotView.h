// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBSNAPSHOTVIEW_H
#define AMSUIWEBSNAPSHOTVIEW_H

@class UIView;


#import "AMSUICommonView.h"

@interface AMSUIWebSnapshotView : AMSUICommonView

@property (nonatomic) NSInteger originalInterfaceStyle; // ivar: _originalInterfaceStyle
@property (nonatomic) CGFloat originalRatio; // ivar: _originalRatio
@property (retain, nonatomic) UIView *snapshot; // ivar: _snapshot
@property (nonatomic) NSUInteger visibilityModifiers; // ivar: _visibilityModifiers


+(id)_imageViewForImage:(id)arg0 ;
+(void)_screenCapFromView:(id)arg0 completion:(id)arg1 ;
-(BOOL)_visibilityUnmodified;
-(id)initWithView:(id)arg0 completion:(id)arg1 ;
-(void)_updateSnapshot:(id)arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif