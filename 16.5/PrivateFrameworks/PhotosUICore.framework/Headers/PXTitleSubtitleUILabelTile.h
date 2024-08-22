// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXTITLESUBTITLEUILABELTILE_H
#define PXTITLESUBTITLEUILABELTILE_H

@class UIView, NSString;
@protocol PXUIViewBasicTile;

#import <Foundation/Foundation.h>

#import "PXTitleSubtitleUILabel.h"
#import "PXTitleSubtitleLabelSpec.h"

@interface PXTitleSubtitleUILabelTile : NSObject <PXUIViewBasicTile>

 {
    UIView *_view;
    PXTitleSubtitleUILabel *_label;
}


@property (nonatomic, setter=_setAnimationCount:) NSInteger _animationCount; // ivar: __animationCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) PXTitleSubtitleLabelSpec *labelSpec; // ivar: _labelSpec
@property (readonly, nonatomic) CGFloat lastBaseline;
@property (nonatomic) BOOL rendersTextAsynchronously; // ivar: _rendersTextAsynchronously
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) UIView *view;


-(id)init;
-(void)becomeReusable;
-(void)didAnimateToGeometry:(struct PXTileGeometry )arg0 toUserData:(id)arg1 withOptions:(id)arg2 ;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;
-(void)performBatchUpdates:(id)arg0 ;
-(void)prepareForReuse;
-(void)willAnimateToGeometry:(struct PXTileGeometry )arg0 toUserData:(id)arg1 withOptions:(id)arg2 ;


@end


#endif