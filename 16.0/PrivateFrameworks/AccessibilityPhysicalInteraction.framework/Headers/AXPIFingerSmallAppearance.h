// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXPIFINGERSMALLAPPEARANCE_H
#define AXPIFINGERSMALLAPPEARANCE_H

@class NSString;
@protocol AXPIFingerAppearanceDelegate;

#import <Foundation/Foundation.h>


@interface AXPIFingerSmallAppearance : NSObject <AXPIFingerAppearanceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)showFingerOutlines;
-(BOOL)showInnerCircle;
-(BOOL)useSystemFilters;
-(CGFloat)fingerInnerCircleInnerRadius;
-(CGFloat)fingerInnerRadius;
-(CGFloat)fingerWidth;
-(CGFloat)innerCircleStrokeWidth;
-(CGFloat)pressedAlpha;
-(CGFloat)pressedScale;
-(CGFloat)strokeOutlineWidth;
-(CGFloat)strokeWidth;
-(CGFloat)unpressedAlpha;
-(CGFloat)unpressedScale;
-(id)circularProgressFillColor;
-(id)deselectedFillColor;
-(id)deselectedStrokeColor;
-(id)pressedCircularProgressFillColor;
-(id)selectedFillColor;
-(id)selectedStrokeColor;
-(id)strokeOutlineColor;


@end


#endif