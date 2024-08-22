// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MAPENGINERENDERQUEUESOURCE_H
#define _MAPENGINERENDERQUEUESOURCE_H

@class NSString;
@protocol GGLRenderQueueSource;

#import <Foundation/Foundation.h>


@interface _MapEngineRenderQueueSource : NSObject <GGLRenderQueueSource>

 {
    *void _mapEngine;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)renderQueueForTimestamp:(CGFloat)arg0 ;
-(BOOL)isDelayedRenderQueueConsumptionSupported;
-(id)initWithEngine:(*void)arg0 ;


@end


#endif