// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARVISUALPROVIDER_SPLIT1284_H
#define _UISTATUSBARVISUALPROVIDER_SPLIT1284_H

@class Split, NSString;
@protocol _UIStatusBarVisualProvider_CustomSplit;



@interface _UIStatusBarVisualProvider_Split1284 : Split <_UIStatusBarVisualProvider_CustomSplit>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)nativeDisplayWidth;
+(CGFloat)pillCenteringOffset;
+(CGFloat)trailingEdgeInsetLeadingAdjustment;
+(struct CGSize )notchSize;
-(CGFloat)bottomLeadingTopOffset;


@end


#endif