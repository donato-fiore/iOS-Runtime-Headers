// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSPUSHHANDLER_H
#define AMSPUSHHANDLER_H

@class NSDictionary;
@protocol AMSBagProtocol, AMSPushHandlerContract, AMSPushHandlerDelegate;

#import <Foundation/Foundation.h>

#import "AMSPushConfiguration.h"

@interface AMSPushHandler : NSObject

@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, nonatomic) NSObject<AMSPushHandlerContract> *bagContract; // ivar: _bagContract
@property (readonly, nonatomic) AMSPushConfiguration *configuration; // ivar: _configuration
@property (weak, nonatomic) NSObject<AMSPushHandlerDelegate> *delegate;
@property (readonly, nonatomic) NSDictionary *enabledParsables;


-(BOOL)shouldHandleNotification:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 bag:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 bagContract:(id)arg1 ;
-(void)_handlePushNotification:(id)arg0 ;
-(void)dealloc;
-(void)handleNotification:(id)arg0 ;
-(void)registerForEngagementPushes;


@end


#endif