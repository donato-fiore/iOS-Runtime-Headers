// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BRKSIGNIFICANTTIMECHANGENOTIFIER_H
#define _BRKSIGNIFICANTTIMECHANGENOTIFIER_H


#import <Foundation/Foundation.h>


@interface _BRKSignificantTimeChangeNotifier : NSObject



+(id)sharedInstance;
-(id)init;
-(void)_notify:(id)arg0 ;
-(void)dealloc;
-(void)triggerNotification;


@end


#endif