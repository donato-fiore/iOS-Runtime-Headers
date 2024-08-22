// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXROUNDEDCORNEROVERLAYVIEW_H
#define PXROUNDEDCORNEROVERLAYVIEW_H

@class UIImageView, UIColor;


#import "PXFocusInfo.h"

@interface PXRoundedCornerOverlayView : UIImageView {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    ? _needsUpdateFlags;
}


@property (readonly, nonatomic) BOOL continuousCorners; // ivar: _continuousCorners
@property (readonly, nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, nonatomic) NSUInteger cornersToRound; // ivar: _cornersToRound
@property (readonly, nonatomic) CGFloat displayScale; // ivar: _displayScale
@property (readonly, nonatomic) PXFocusInfo *focusInfo;
@property (readonly, nonatomic) UIColor *overlayColor; // ivar: _overlayColor


-(BOOL)_needsUpdate;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)mutableChangeObject;
-(void)_invalidateImage;
-(void)_setNeedsUpdate;
-(void)_updateIfNeeded;
-(void)_updateImageIfNeeded;
-(void)performChanges:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif