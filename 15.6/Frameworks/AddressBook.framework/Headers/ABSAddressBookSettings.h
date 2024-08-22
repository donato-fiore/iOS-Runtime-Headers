// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ABSADDRESSBOOKSETTINGS_H
#define ABSADDRESSBOOKSETTINGS_H

@class CNFuture, NSDictionary;
@protocol CNSchedulerProvider;

#import <Foundation/Foundation.h>


@interface ABSAddressBookSettings : NSObject

@property (readonly, nonatomic) CNFuture *contactStoreFuture; // ivar: _contactStoreFuture
@property (readonly, copy, nonatomic) NSDictionary *options; // ivar: _options
@property (readonly, nonatomic) int policy; // ivar: _policy
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider


-(id)init;
-(id)initWithContactStoreFuture:(id)arg0 ;
-(id)initWithOptions:(id)arg0 ;
-(id)initWithOptions:(id)arg0 policy:(int)arg1 ;
-(id)initWithOptions:(id)arg0 policy:(int)arg1 contactStoreFuture:(id)arg2 schedulerProvider:(id)arg3 ;
-(id)newFaultHandlerWithStorage:(id)arg0 ;


@end


#endif