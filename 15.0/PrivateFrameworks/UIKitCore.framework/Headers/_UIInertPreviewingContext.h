// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIINERTPREVIEWINGCONTEXT_H
#define _UIINERTPREVIEWINGCONTEXT_H

@class NSString;
@protocol UIViewControllerPreviewing_Internal, UIViewControllerPreviewingDelegate;

#import <Foundation/Foundation.h>

#import "UIGestureRecognizer.h"
#import "UIView.h"

@interface _UIInertPreviewingContext : NSObject <UIViewControllerPreviewing_Internal>

 {
    UIGestureRecognizer *_failureRelationshipGestureRecognizer;
}


@property (retain, nonatomic) UIView *customViewForInteractiveHighlight; // ivar: _customViewForInteractiveHighlight
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIViewControllerPreviewingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIGestureRecognizer *previewingGestureRecognizerForFailureRelationship;
@property (nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (retain, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (readonly) Class superclass;


-(id)initWithSourceView:(id)arg0 ;
-(struct CGRect )preferredSourceViewRectInCoordinateSpace:(id)arg0 ;
-(void)unregister;


@end


#endif