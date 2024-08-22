// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHWATCHDOGTESTERTIMER_H
#define BLSHWATCHDOGTESTERTIMER_H

@class NSString;
@protocol BLSHWatchdogTiming;

#import <Foundation/Foundation.h>


@interface BLSHWatchdogTesterTimer : NSObject <BLSHWatchdogTiming>

 {
    BOOL _invalidated;
    NSString *_explanation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *explanation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) Class superclass;


-(id)initWithExplanation:(id)arg0 ;
-(void)invalidate;


@end


#endif