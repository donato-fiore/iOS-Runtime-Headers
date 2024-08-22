// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIRADIOSITYSHADOWVIEW_H
#define _UIRADIOSITYSHADOWVIEW_H

@class CALayer;


#import "UIView.h"
#import "UIBezierPath.h"

@interface _UIRadiosityShadowView : UIView

@property (nonatomic) BOOL needsPunchout; // ivar: _needsPunchout
@property (retain, nonatomic) CALayer *punchoutLayer; // ivar: _punchoutLayer
@property (retain, nonatomic) UIBezierPath *shadowPath; // ivar: _shadowPath


-(id)initWithSourceView:(id)arg0 shadowPath:(id)arg1 isSoft:(BOOL)arg2 ;


@end


#endif