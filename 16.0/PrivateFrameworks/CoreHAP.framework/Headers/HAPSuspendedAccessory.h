// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPSUSPENDEDACCESSORY_H
#define HAPSUSPENDEDACCESSORY_H

@class HMFObject, NSString;
@protocol OS_dispatch_queue;



@interface HAPSuspendedAccessory : HMFObject

@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)description;
-(id)initWithName:(id)arg0 identifier:(id)arg1 type:(NSUInteger)arg2 queue:(id)arg3 ;
-(void)wakeWithCompletion:(id)arg0 ;


@end


#endif