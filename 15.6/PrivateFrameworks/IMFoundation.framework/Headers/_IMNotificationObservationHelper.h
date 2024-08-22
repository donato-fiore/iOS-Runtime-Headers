// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _IMNOTIFICATIONOBSERVATIONHELPER_H
#define _IMNOTIFICATIONOBSERVATIONHELPER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _IMNotificationObservationHelper : NSObject {
    id *_observer;
    id *_object;
    id *_block;
    NSString *_name;
}




-(id)initWithObserver:(id)arg0 name:(id)arg1 object:(id)arg2 block:(id)arg3 ;
-(void)_notification:(id)arg0 ;
-(void)dealloc;


@end


#endif