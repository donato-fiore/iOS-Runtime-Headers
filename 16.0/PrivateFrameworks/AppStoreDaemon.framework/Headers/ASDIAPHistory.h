// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDIAPHISTORY_H
#define ASDIAPHISTORY_H

@class NSString;
@protocol ASDServiceProvider;

#import <Foundation/Foundation.h>

#import "ASDServiceBroker.h"

@interface ASDIAPHistory : NSObject <ASDServiceProvider>

 {
    ASDServiceBroker *_serviceBroker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)interface;
+(id)sharedInstance;
-(id)init;
-(void)getAllIAPsForActiveAccountWithResultHandler:(id)arg0 ;
-(void)getIAPsForActiveAccountWithAdamIDs:(id)arg0 withResultHandler:(id)arg1 ;
-(void)refreshIAPsForActiveAccountWithCompletionHandler:(id)arg0 ;


@end


#endif