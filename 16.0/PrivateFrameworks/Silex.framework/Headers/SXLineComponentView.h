// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXLINECOMPONENTVIEW_H
#define SXLINECOMPONENTVIEW_H

@class CALayer;


#import "SXComponentView.h"
#import "SXSolidBorderView.h"

@interface SXLineComponentView : SXComponentView

@property (retain, nonatomic) SXSolidBorderView *borderView; // ivar: _borderView
@property (retain, nonatomic) CALayer *strokeLayer; // ivar: _strokeLayer


-(BOOL)userInteractable;
-(void)discardContents;
-(void)loadComponent:(id)arg0 ;
-(void)presentComponentWithChanges:(struct ? )arg0 ;
-(void)renderContents;


@end


#endif