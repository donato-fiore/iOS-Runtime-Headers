// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDCANDIDATEVIEWCONFIGURATIONPADBAR_H
#define UIKEYBOARDCANDIDATEVIEWCONFIGURATIONPADBAR_H



#import "UIKeyboardCandidateViewConfigurationPhoneBar.h"

@interface UIKeyboardCandidateViewConfigurationPadBar : UIKeyboardCandidateViewConfigurationPhoneBar



-(BOOL)shouldAlwaysShowSortControl;
-(BOOL)shouldResizeKeyboardBackdrop;
-(CGFloat)candidateDefaultFontSize;
-(NSUInteger)rowsToExtend;
-(id)arrowButtonSeparatorImage;
-(id)edgeSeparatorImage;
-(id)extendedScrolledState;
-(id)extendedState;
-(id)initialState;


@end


#endif