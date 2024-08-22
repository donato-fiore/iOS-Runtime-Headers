// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFANALYTICSCLIENT_H
#define SBFANALYTICSCLIENT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SBFAnalyticsBackend.h"

@interface SBFAnalyticsClient : NSObject {
    SBFAnalyticsBackend *_backend;
}


@property (copy, nonatomic) NSString *significantTimeChangedNotificationName; // ivar: _significantTimeChangedNotificationName


+(id)sharedInstance;
-(id)initWithBackend:(id)arg0 ;
-(void)_noteSignificantTimeChanged:(id)arg0 ;
-(void)emitEvent:(NSUInteger)arg0 ;
-(void)emitEvent:(NSUInteger)arg0 withPayload:(id)arg1 ;
-(void)registerForQueryName:(NSUInteger)arg0 handler:(id)arg1 ;


@end


#endif