// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NADEALLOCATIONTRACER_H
#define NADEALLOCATIONTRACER_H

@protocol NADeallocationTracerDelegate;

#import <Foundation/Foundation.h>


@interface NADeallocationTracer : NSObject

@property (nonatomic) NSObject<NADeallocationTracerDelegate> *delegate; // ivar: _delegate


-(id)initWithDelegate:(id)arg0 ;
-(void)dealloc;


@end


#endif