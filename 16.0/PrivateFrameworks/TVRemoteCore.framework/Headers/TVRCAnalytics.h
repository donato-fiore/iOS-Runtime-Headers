// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRCANALYTICS_H
#define TVRCANALYTICS_H


#import <Foundation/Foundation.h>


@interface TVRCAnalytics : NSObject



+(id)sharedInstance;
-(id)_connectionDictionaryForType:(id)arg0 status:(id)arg1 reason:(id)arg2 ;
-(id)_presentationSourceEventDictionaryFor:(id)arg0 ;
-(id)_spinnerShownDictionaryFor:(id)arg0 ;
-(void)logConnectingSpinnerShown:(id)arg0 ;
-(void)logConnectionStatus:(NSInteger)arg0 type:(NSInteger)arg1 reason:(NSInteger)arg2 ;
-(void)logPresentationFrom:(id)arg0 ;
-(void)logSearchingSpinnerShown;
-(void)logSessionStatistics:(id)arg0 ;
-(void)logShortcutActionRunWithType:(id)arg0 ;


@end


#endif