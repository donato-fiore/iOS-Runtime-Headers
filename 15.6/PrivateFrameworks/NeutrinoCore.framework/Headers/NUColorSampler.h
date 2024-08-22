// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUCOLORSAMPLER_H
#define NUCOLORSAMPLER_H

@class NSString;
@protocol NUTimeBased, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NUColorSpace.h"
#import "NUComposition.h"
#import "NUImageDataRequest.h"

@interface NUColorSampler : NSObject <NUTimeBased>



@property (retain, nonatomic) NUColorSpace *colorSpace; // ivar: _colorSpace
@property (copy, nonatomic) NUComposition *composition; // ivar: _composition
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NUImageDataRequest *request; // ivar: _request
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // ivar: _responseQueue
@property (nonatomic) NSInteger sampleRadius; // ivar: _sampleRadius
@property (nonatomic) BOOL shouldCoalesceUpdates; // ivar: _shouldCoalesceUpdates
@property (readonly) Class superclass;
@property (nonatomic) ? time;


-(id)_pipelineFilters;
-(id)initWithComposition:(id)arg0 ;
-(id)initWithComposition:(id)arg0 responseQueue:(id)arg1 ;
-(void)cancel;
-(void)configureRequest:(id)arg0 forSamplingAtPoint:(struct ? )arg1 ;
-(void)sampleColorAt:(struct ? )arg0 completion:(id)arg1 ;


@end


#endif