// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AMSNOTIFICATIONOBSERVABLE_H
#define _AMSNOTIFICATIONOBSERVABLE_H



#import "AMSObservable.h"

@interface _AMSNotificationObservable : AMSObservable



-(BOOL)cancel;
-(BOOL)sendCompletion;
-(id)initWithNotification:(id)arg0 object:(id)arg1 ;
-(void)_receivedNotification:(id)arg0 ;


@end


#endif