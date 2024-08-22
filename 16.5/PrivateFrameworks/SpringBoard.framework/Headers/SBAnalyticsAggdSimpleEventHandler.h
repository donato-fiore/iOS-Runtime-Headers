// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBANALYTICSAGGDSIMPLEEVENTHANDLER_H
#define SBANALYTICSAGGDSIMPLEEVENTHANDLER_H

@class NSString;
@protocol SBFAnalyticsBackendEventHandling;

#import <Foundation/Foundation.h>


@interface SBAnalyticsAggdSimpleEventHandler : NSObject <SBFAnalyticsBackendEventHandling>

 {
    NSUInteger _eventType;
    id *_emitBlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)latchForEvent:(NSUInteger)arg0 aggdKey:(id)arg1 ;
+(id)monotonicallyIncreasingForEvent:(NSUInteger)arg0 aggdKey:(id)arg1 ;
+(id)setScalarForEvent:(NSUInteger)arg0 aggdKey:(id)arg1 valueBlock:(id)arg2 ;
-(BOOL)handleEvent:(NSUInteger)arg0 withContext:(id)arg1 ;
-(id)initWithEvent:(NSUInteger)arg0 emitBlock:(id)arg1 ;


@end


#endif