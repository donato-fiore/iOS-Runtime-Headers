// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISCROLLVIEWVFD_H
#define _UISCROLLVIEWVFD_H

@protocol _UIUpdateCompletionObserving;

#import <Foundation/Foundation.h>

#import "UIScrollView.h"
#import "_UIScrollViewFPSHUD.h"

@interface _UIScrollViewVFD : NSObject <_UIUpdateCompletionObserving>

 {
    UIScrollView *_scrollView;
    _UIScrollViewFPSHUD *_debugOverlay;
    unsigned int _activeSubreasons;
    _UIUpdateRequest _updateRequest;
    _UIUpdateRequestRecord _updateRecord;
    _UIScrollViewVFDLookupState _lookupState;
    NSUInteger _displayedModelTime;
    CGPoint _displayedOrigin;
}




-(void)_updateCompletedForModelMediaTime:(CGFloat)arg0 timing:(struct _UIUpdateTiming *)arg1 ;
-(void)dealloc;


@end


#endif