// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKADAPTIVEIMAGE_H
#define TKADAPTIVEIMAGE_H

@class UIColor, NSURL, UIImage, NSString;
@protocol TKNetworkTask;


#import "TKAdaptiveResourceObject.h"
#import "TKAdaptiveImage_Trait.h"

@interface TKAdaptiveImage : TKAdaptiveResourceObject {
    BOOL _supportsTraits;
    TKAdaptiveImage_Trait *_currentTrait;
    id<TKNetworkTask> *_task;
}


@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) NSURL *currentURL; // ivar: _currentURL
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) BOOL loading; // ivar: _loading
@property (copy, nonatomic) NSString *priority; // ivar: _priority
@property (nonatomic) CGFloat quality; // ivar: _quality
@property (copy, nonatomic) NSString *service; // ivar: _service
@property (nonatomic) NSUInteger state; // ivar: _state
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(id)zeroTrait;
-(id)init;
-(id)traits;
-(id)url:(id)arg0 withTrait:(id)arg1 ;
-(void)adaptiveMetricsDidChange;
-(void)dealloc;
-(void)didLoadImage:(id)arg0 state:(NSUInteger)arg1 ;
-(void)loadWithTrait:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)tmlDispose;
-(void)tmlObjectCompleted;


@end


#endif