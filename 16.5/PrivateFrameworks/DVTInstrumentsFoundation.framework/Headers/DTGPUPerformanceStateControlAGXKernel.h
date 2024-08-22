// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTGPUPERFORMANCESTATECONTROLAGXKERNEL_H
#define DTGPUPERFORMANCESTATECONTROLAGXKERNEL_H

@class NSString;
@protocol DTGPUPerformanceStateControl;

#import <Foundation/Foundation.h>


@interface DTGPUPerformanceStateControlAGXKernel : NSObject <DTGPUPerformanceStateControl>

 {
    unsigned int _connection;
    NSUInteger _acceleratorId;
    BOOL _holdingLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)enable:(NSUInteger)arg0 ;
-(id)currentState;
-(id)disable;
-(id)initWithDevice:(id)arg0 ;
-(unsigned int)getIOAccelerator;
-(void)close;
-(void)dealloc;


@end


#endif