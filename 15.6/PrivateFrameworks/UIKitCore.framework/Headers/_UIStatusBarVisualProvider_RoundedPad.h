// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARVISUALPROVIDER_ROUNDEDPAD_H
#define _UISTATUSBARVISUALPROVIDER_ROUNDEDPAD_H

@class Pad;



@interface _UIStatusBarVisualProvider_RoundedPad : Pad



+(BOOL)regionCursorIsPill;
+(CGFloat)baselineOffset;
+(CGFloat)cornerRadius;
+(CGFloat)height;
+(struct NSDirectionalEdgeInsets )edgeInsets;
+(struct UIEdgeInsets )regionCursorInsets;
-(id)pillFont;
-(id)pillSmallFont;
-(struct CGSize )pillSize;
-(struct CGSize )smallPillSize;


@end


#endif