// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKUIACCOUNTERRORDISPLAYER_H
#define EKUIACCOUNTERRORDISPLAYER_H


#import <Foundation/Foundation.h>


@interface EKUIAccountErrorDisplayer : NSObject



+(BOOL)_reauthorizeForAccount:(id)arg0 usingViewController:(id)arg1 ;
+(BOOL)errorIsActionable:(NSUInteger)arg0 ;
+(NSUInteger)moreSevereErrorOfError:(NSUInteger)arg0 andError:(NSUInteger)arg1 ;
+(NSUInteger)severityForError:(NSUInteger)arg0 ;
+(void)handleContinueSyncingForAccount:(id)arg0 calendars:(id)arg1 error:(NSUInteger)arg2 ;
+(void)presentAlertForAccount:(id)arg0 error:(NSUInteger)arg1 usingViewController:(id)arg2 ;
+(void)presentAlertForOfflineErrorUsingViewController:(id)arg0 ;


@end


#endif