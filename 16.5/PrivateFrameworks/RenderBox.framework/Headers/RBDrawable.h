// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBDRAWABLE_H
#define RBDRAWABLE_H

@class NSString, NSDictionary;
@protocol _RBDrawableDelegate, RBDrawableStatistics, RBDrawableDelegate, MTLEvent, MTLTexture;

#import <Foundation/Foundation.h>

#import "RBDevice.h"

@interface RBDrawable : NSObject <_RBDrawableDelegate, RBDrawableStatistics>

 {
    refcounted_ptr<RB::Drawable> _drawable;
    spin_lock _statistics_handler_lock;
    objc_ptr<void (^)(id<RBDrawableStatistics>)> _statistics_handler;
    id<RBDrawableDelegate> *_delegate;
    objc_ptr<RBDevice *> _device;
    objc_ptr<id<MTLTexture>> _texture;
    objc_ptr<id<MTLEvent>> _event;
}


@property (readonly, nonatomic) CGFloat GPUDuration;
@property (nonatomic) ? clearColor; // ivar: _clearColor
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RBDrawableDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) RBDevice *device;
@property (retain, nonatomic) NSObject<MTLEvent> *event;
@property (nonatomic) NSUInteger eventValue; // ivar: _eventValue
@property (readonly) NSUInteger hash;
@property (nonatomic) int initialState; // ivar: _initialState
@property (nonatomic) NSUInteger pixelFormat; // ivar: _pixelFormat
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) CGSize size; // ivar: _size
@property (readonly, copy, nonatomic) NSDictionary *statistics;
@property (copy, nonatomic) id *statisticsHandler;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<MTLTexture> *texture;


-(id)initWithDevice:(id)arg0 ;
-(void)_RBDrawableStatisticsDidChange;
-(void)dealloc;
-(void)dumpTexture:(id)arg0 name:(id)arg1 ;
-(void)finish;
-(void)renderDisplayList:(id)arg0 flags:(unsigned int)arg1 ;
-(void)renderDisplayList:(id)arg0 sourceRect:(struct ? )arg1 destinationOffset:(struct ? )arg2 flags:(unsigned int)arg3 ;
-(void)renderItems:(id)arg0 flags:(unsigned int)arg1 ;


@end


#endif