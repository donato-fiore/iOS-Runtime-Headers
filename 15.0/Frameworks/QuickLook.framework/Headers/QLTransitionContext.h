// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLTRANSITIONCONTEXT_H
#define QLTRANSITIONCONTEXT_H

@class UIImage, UIView;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "QLPreviewController.h"

@interface QLTransitionContext : NSObject <NSSecureCoding>

 {
    QLPreviewController *_previewController;
    UIImage *_sourceViewSnapshotImage;
    BOOL _contextPreparedToSend;
}


@property CGFloat hostNavigationOffset; // ivar: _hostNavigationOffset
@property BOOL isSourceTransformed; // ivar: _isSourceTransformed
@property CGSize previewItemSize; // ivar: _previewItemSize
@property CGRect sourceBounds; // ivar: _sourceBounds
@property CGPoint sourceCenter; // ivar: _sourceCenter
@property CGRect sourceFrame; // ivar: _sourceFrame
@property CGAffineTransform sourceTransform; // ivar: _sourceTransform
@property (retain, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (retain, nonatomic) UIView *sourceViewSnapshot; // ivar: _sourceViewSnapshot
@property CGFloat topNavigationOffset; // ivar: _topNavigationOffset
@property CGRect uncroppedFrame; // ivar: _uncroppedFrame
@property BOOL usingViewForZoomTransition; // ivar: _usingViewForZoomTransition


+(BOOL)supportsSecureCoding;
+(BOOL)useImageTransitionForPreviewController:(id)arg0 ;
+(BOOL)useViewTransitionForPreviewController:(id)arg0 ;
+(BOOL)useZoomTransitionForPreviewController:(id)arg0 ;
+(id)firstChildNavigationControllerFromViewController:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQLPreviewController:(id)arg0 containerView:(id)arg1 toViewController:(id)arg2 ;
-(void)_snapshotSourceViewIfNeeded;
-(void)encodeWithCoder:(id)arg0 ;
-(void)prepareContextToSend;
-(void)setUpTransitionSourceView;


@end


#endif