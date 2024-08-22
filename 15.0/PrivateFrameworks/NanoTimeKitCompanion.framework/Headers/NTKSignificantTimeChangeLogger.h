// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKSIGNIFICANTTIMECHANGELOGGER_H
#define NTKSIGNIFICANTTIMECHANGELOGGER_H


#import <Foundation/Foundation.h>


@interface NTKSignificantTimeChangeLogger : NSObject



+(id)sharedInstance;
+(void)beginLogging;
-(id)init;
-(void)_handleNotification:(id)arg0 ;
-(void)_logNotificationReceiptWithName:(id)arg0 ;
-(void)_startObserving;


@end


#endif