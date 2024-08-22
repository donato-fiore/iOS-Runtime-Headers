// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDAPPSTORESERVICE_H
#define ASDAPPSTORESERVICE_H

@class NSString;
@protocol ASDServiceProvider;

#import <Foundation/Foundation.h>

#import "ASDServiceBroker.h"

@interface ASDAppStoreService : NSObject <ASDServiceProvider>

 {
    ASDServiceBroker *_serviceBroker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultService;
+(id)interface;
-(id)_initWithServiceBroker:(id)arg0 ;
-(id)init;
-(void)launchAppStoreWithURL:(id)arg0 withReplyHandler:(id)arg1 ;


@end


#endif