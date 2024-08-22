// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSPRECISEDATEPROVIDER_H
#define CSPRECISEDATEPROVIDER_H

@class SBUIPreciseClockTimer, NSString;
@protocol SBFDateProviding;

#import <Foundation/Foundation.h>


@interface CSPreciseDateProvider : NSObject <SBFDateProviding>

 {
    SBUIPreciseClockTimer *_preciseClockTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)date;
-(id)init;
-(id)observeMinuteUpdatesWithHandler:(id)arg0 ;
-(void)removeMinuteUpdateHandler:(id)arg0 ;


@end


#endif