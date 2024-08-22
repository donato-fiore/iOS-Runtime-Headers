// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFTABHOVERPREVIEWCONTROLLER_H
#define SFTABHOVERPREVIEWCONTROLLER_H

@class WBSDispatchSourceTimer, UIHoverGestureRecognizer;
@protocol SFTabHoverPreviewItem, SFTabHoverPreviewControllerDelegate;

#import <Foundation/Foundation.h>


@interface SFTabHoverPreviewController : NSObject {
    id<SFTabHoverPreviewItem> *_itemShowingPreview;
    WBSDispatchSourceTimer *_tabHoverPreviewShowTimer;
    WBSDispatchSourceTimer *_disableHoverTimer;
    CGFloat _lastTimeHoverPreviewWasDismissed;
}


@property (weak) NSObject<SFTabHoverPreviewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) UIHoverGestureRecognizer *hoverRecognizer; // ivar: _hoverRecognizer


-(id)init;
-(void)_cancelOrCloseHoverPreviewWithGracePeriod:(BOOL)arg0 ;
-(void)_showHoverPreviewForItem:(id)arg0 ;
-(void)_temporarilyDisableHover;
-(void)cancel;
-(void)dismiss;
-(void)setNeedsSnapshotUpdate;
-(void)updateWithItem:(id)arg0 ;


@end


#endif