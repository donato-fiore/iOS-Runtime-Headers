// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPORTALVIEW_H
#define _UIPORTALVIEW_H

@class NSString, CAPortalLayer;


#import "UIView.h"

@interface _UIPortalView : UIView

@property (nonatomic, getter=_isGeometryFrozen, setter=_setGeometryFrozen:) BOOL _geometryFrozen; // ivar: __geometryFrozen
@property (nonatomic) BOOL allowsBackdropGroups;
@property (nonatomic) BOOL allowsHitTesting;
@property (nonatomic) BOOL forwardsClientHitTestingToSourceView; // ivar: _forwardsClientHitTestingToSourceView
@property (nonatomic) BOOL hidesSourceView;
@property (nonatomic) BOOL matchesAlpha;
@property (nonatomic) BOOL matchesPosition;
@property (nonatomic) BOOL matchesTransform;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) CAPortalLayer *portalLayer;
@property (weak, nonatomic) UIView *sourceView; // ivar: _sourceView


+(Class)layerClass;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)description;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithSourceView:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setCenter:(struct CGPoint )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHidden:(BOOL)arg0 ;


@end


#endif