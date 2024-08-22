// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPREVIEWINTERACTIONCUSTOMVIEWHIGHLIGHTER_H
#define _UIPREVIEWINTERACTIONCUSTOMVIEWHIGHLIGHTER_H

@class NSString;
@protocol _UIPreviewInteractionHighlighting;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface _UIPreviewInteractionCustomViewHighlighter : NSObject <_UIPreviewInteractionHighlighting>



@property (retain, nonatomic) UIView *customView; // ivar: _customView
@property (nonatomic) BOOL customViewFlipsHorizontalAxis; // ivar: _customViewFlipsHorizontalAxis
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)highlightShouldBeginInContainerView:(id)arg0 presentationContainerView:(id)arg1 previewingContext:(id)arg2 ;
-(void)finalizeHighlightForPreviewingContext:(id)arg0 ;
-(void)prepareHighlightWithPreviewingContext:(id)arg0 ;


@end


#endif