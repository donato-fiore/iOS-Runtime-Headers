// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPREVIEWINTERACTIONSYSTEMHIGHLIGHTER_H
#define _UIPREVIEWINTERACTIONSYSTEMHIGHLIGHTER_H

@class NSString;
@protocol _UIPreviewInteractionHighlighting;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface _UIPreviewInteractionSystemHighlighter : NSObject <_UIPreviewInteractionHighlighting>



@property (retain, nonatomic) UIView *blinderView; // ivar: _blinderView
@property (nonatomic) BOOL blinderViewEnabled; // ivar: _blinderViewEnabled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *initialSnapshotView; // ivar: _initialSnapshotView
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *updatedSnapshotView; // ivar: _updatedSnapshotView


-(id)_newSnapshotViewForPreviewingContext:(id)arg0 afterScreenUpdates:(BOOL)arg1 ;
-(id)highlightShouldBeginInContainerView:(id)arg0 presentationContainerView:(id)arg1 previewingContext:(id)arg2 ;
-(void)finalizeHighlightForPreviewingContext:(id)arg0 ;
-(void)prepareHighlightWithPreviewingContext:(id)arg0 ;


@end


#endif