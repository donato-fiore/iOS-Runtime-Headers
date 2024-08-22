// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSWORDTIMINGSERVICE_H
#define VSWORDTIMINGSERVICE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface VSWordTimingService : NSObject

@property (retain, nonatomic) NSDictionary *wordTimings; // ivar: _wordTimings


-(id)estimatedTTSWordTimingForText:(id)arg0 withLanguage:(id)arg1 voiceName:(id)arg2 ;
-(id)timingInfosFrom:(id)arg0 withText:(id)arg1 ;
-(id)timingPlistForLanguage:(id)arg0 ;


@end


#endif