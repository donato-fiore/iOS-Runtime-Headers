// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNACTSTEWIEFACADE_H
#define CNACTSTEWIEFACADE_H

@class CoreTelephonyClient, CTStewieStateMonitor, NSNumber, CNTimestamped, NSString, NSArray;
@protocol CTStewieStateMonitorDelegate, CNACTStewieFacade;

#import <Foundation/Foundation.h>


@interface CNACTStewieFacade : NSObject <CTStewieStateMonitorDelegate, CNACTStewieFacade>

 {
    CoreTelephonyClient *_coreTelephonyClient;
    CTStewieStateMonitor *_stateMonitor;
    NSNumber *_enabled;
    CNTimestamped *_memo;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isEnabled;
@property (readonly) Class superclass;
@property (readonly) NSArray *terms;


+(BOOL)isEnabledServices:(NSInteger)arg0 ;
+(BOOL)isEnabledState:(id)arg0 ;
+(BOOL)isMessagesApp;
+(id)localizedPhrases;
-(BOOL)withLock_isMemoValid;
-(CGFloat)withLock_AgeOfMemo;
-(id)init;
-(id)initWithCoreTelephonyClient:(id)arg0 stateMonitor:(id)arg1 ;
-(id)numbers;
-(void)startMonitoring;
-(void)stateChanged:(id)arg0 ;


@end


#endif