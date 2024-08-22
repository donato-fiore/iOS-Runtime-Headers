// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXUIBUTTONTILE_H
#define PXUIBUTTONTILE_H

@class UIButton, NSArray, UIView, NSString;
@protocol PXUIViewBasicTile, PXReusableObject, PXUIButtonTileDelegate;

#import <Foundation/Foundation.h>

#import "PXButtonSpec.h"

@interface PXUIButtonTile : NSObject <PXUIViewBasicTile, PXReusableObject>

 {
    BOOL _hasScheduledUpdate;
    ? _needsUpdateFlags;
}


@property (readonly, nonatomic) UIButton *_button; // ivar: __button
@property (copy, nonatomic, setter=_setLayoutConstraints:) NSArray *_layoutConstraints; // ivar: __layoutConstraints
@property (retain, nonatomic, setter=_setSpec:) PXButtonSpec *_spec; // ivar: __spec
@property (readonly, nonatomic) UIView *_view; // ivar: __view
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXUIButtonTileDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) UIView *view;


-(BOOL)_needsUpdate;
-(id)init;
-(void)_handleButton:(id)arg0 ;
-(void)_invalidateButton;
-(void)_setNeedsUpdate;
-(void)_updateButtonIfNeeded;
-(void)_updateIfNeeded;
-(void)becomeReusable;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif