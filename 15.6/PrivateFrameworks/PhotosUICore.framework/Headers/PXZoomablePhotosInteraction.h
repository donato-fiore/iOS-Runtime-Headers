// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXZOOMABLEPHOTOSINTERACTION_H
#define PXZOOMABLEPHOTOSINTERACTION_H

@protocol PXZoomablePhotosInteractionDelegate, PXAnonymousView;

#import <Foundation/Foundation.h>

#import "PXZoomablePhotosViewModel.h"

@interface PXZoomablePhotosInteraction : NSObject {
    CGFloat _currentMagnifyEventScale;
    id *_eventMonitor;
}


@property (weak, nonatomic) NSObject<PXZoomablePhotosInteractionDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) NSObject<PXAnonymousView> *view; // ivar: _view
@property (readonly, nonatomic) PXZoomablePhotosViewModel *viewModel; // ivar: _viewModel


-(BOOL)_pinchInteractionShouldBegin;
-(BOOL)handlePinch:(id)arg0 ;
-(BOOL)handleTapOnAssetReference:(id)arg0 ;
-(id)init;
-(id)initWithZoomablePhotosViewModel:(id)arg0 ;


@end


#endif