// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXVIEWPORTDEBUGGER_H
#define SXVIEWPORTDEBUGGER_H

@class NSString;
@protocol SXViewportChangeListener;

#import <Foundation/Foundation.h>

#import "SXViewportDebuggerOverlayView.h"
#import "SXViewport.h"

@interface SXViewportDebugger : NSObject <SXViewportChangeListener>



@property (readonly, nonatomic) SXViewportDebuggerOverlayView *appearStateIndicator; // ivar: _appearStateIndicator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SXViewportDebuggerOverlayView *dynamicBoundsView; // ivar: _dynamicBoundsView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXViewport *viewport; // ivar: _viewport


-(id)colorForAppearState:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)update;
-(void)viewport:(id)arg0 appearStateChangedFromState:(NSUInteger)arg1 ;
-(void)viewport:(id)arg0 boundsDidChangeFromBounds:(struct CGRect )arg1 ;
-(void)viewport:(id)arg0 dynamicBoundsDidChangeFromBounds:(struct CGRect )arg1 ;


@end


#endif