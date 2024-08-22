// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMOBILEFULLSCREENCONTROLLER_H
#define AVMOBILEFULLSCREENCONTROLLER_H

@protocol AVMobileFullscreenControllerDelegate;

#import <Foundation/Foundation.h>

#import "AVPlayerViewController.h"

@interface AVMobileFullscreenController : NSObject {
    AVPlayerViewController *_playerViewController;
}


@property (weak, nonatomic) NSObject<AVMobileFullscreenControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUInteger presentationState; // ivar: _presentationState


-(id)initWithPlayerViewController:(id)arg0 ;
-(void)enterFullscreen:(id)arg0 ;
-(void)exitFullscreen:(id)arg0 ;
-(void)updatePresentationStateTo:(NSUInteger)arg0 ;


@end


#endif