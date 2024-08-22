// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LANOTIFICATIONPROXY_H
#define LANOTIFICATIONPROXY_H

@class NSString;
@protocol LANotificationObserverXPC;

#import <Foundation/Foundation.h>


@interface LANotificationProxy : NSObject <LANotificationObserverXPC>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) NSObject<LANotificationObserverXPC> *target; // ivar: _target


-(id)initWithTarget:(id)arg0 ;
-(void)newValue:(id)arg0 oldValue:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif