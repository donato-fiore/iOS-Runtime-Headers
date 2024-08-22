// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXUIFOCUSTIMELINEVIEW_H
#define PXUIFOCUSTIMELINEVIEW_H

@class NSString, UITapGestureRecognizer;
@protocol UIGestureRecognizerDelegate;


#import "PXFocusTimelineView.h"

@interface PXUIFocusTimelineView : PXFocusTimelineView <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer


+(id)autoFocusEventMarkerImage;
+(id)userInitiatedFocusEventMarkerImage;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)init;
-(void)_PXUIFocusTimelineView_commonInit;
-(void)_handleTap:(id)arg0 ;


@end


#endif