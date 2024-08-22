// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTGPUPERFORMANCESTATECONTROLAGXUMD_H
#define DTGPUPERFORMANCESTATECONTROLAGXUMD_H

@class NSString;
@protocol DTGPUPerformanceStateControl, AGXConsistentStateDevice;

#import <Foundation/Foundation.h>


@interface DTGPUPerformanceStateControlAGXUMD : NSObject <DTGPUPerformanceStateControl>

 {
    NSUInteger _acceleratorId;
    id<AGXConsistentStateDevice> *_agxDevice;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)enable:(NSUInteger)arg0 ;
-(id)currentState;
-(id)disable;
-(id)initWithDevice:(id)arg0 ;


@end


#endif