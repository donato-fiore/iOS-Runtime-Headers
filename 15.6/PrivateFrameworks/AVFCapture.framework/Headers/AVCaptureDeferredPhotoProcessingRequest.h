// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCAPTUREDEFERREDPHOTOPROCESSINGREQUEST_H
#define AVCAPTUREDEFERREDPHOTOPROCESSINGREQUEST_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "AVCaptureDeferredPhotoProxy.h"

@interface AVCaptureDeferredPhotoProcessingRequest : NSObject

@property (readonly) NSArray *delegatesStorage; // ivar: _delegatesStorage
@property (nonatomic) unsigned int firedCallbackFlags; // ivar: _firedCallbackFlags
@property (readonly) AVCaptureDeferredPhotoProxy *photoProxy; // ivar: _photoProxy


-(id)initWithDelegate:(id)arg0 photoProxy:(id)arg1 ;
-(void)addDelegate:(id)arg0 ;
-(void)dealloc;


@end


#endif