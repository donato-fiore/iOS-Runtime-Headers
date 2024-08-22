// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTVIEWSESSION_H
#define AVTVIEWSESSION_H

@class AVTView, UIView;
@protocol AVTViewSessionDelegate;

#import <Foundation/Foundation.h>

#import "AVTViewUpdater.h"

@interface AVTViewSession : NSObject

@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, nonatomic) CGSize aspectRatio; // ivar: _aspectRatio
@property (nonatomic) AVTView *avtView; // ivar: _avtView
@property (nonatomic) UIView *avtViewContainer; // ivar: _avtViewContainer
@property (nonatomic) AVTViewUpdater *avtViewUpdater; // ivar: _avtViewUpdater
@property (readonly, copy, nonatomic) id *becomeActiveHandler; // ivar: _becomeActiveHandler
@property (weak, nonatomic) NSObject<AVTViewSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) id *tearDownHandler; // ivar: _tearDownHandler


// -(id)initWithBecomeActiveHandler:(id)arg0 tearDownHandler:(unk)arg1 aspectRatio:(id)arg2  ;
-(void)activateWithAVTView:(id)arg0 container:(id)arg1 updater:(id)arg2 ;
-(void)tearDownWithCompletionHandler:(id)arg0 ;


@end


#endif