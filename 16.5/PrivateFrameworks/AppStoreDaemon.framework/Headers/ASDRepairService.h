// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDREPAIRSERVICE_H
#define ASDREPAIRSERVICE_H

@class NSString;
@protocol ASDServiceProvider;

#import <Foundation/Foundation.h>

#import "ASDServiceBroker.h"

@interface ASDRepairService : NSObject <ASDServiceProvider>

 {
    ASDServiceBroker *_serviceBroker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultService;
+(id)interface;
-(BOOL)isCoastGuardUnrepairableAppWithItemID:(NSUInteger)arg0 externalVersionID:(NSUInteger)arg1 ;
-(void)refreshKeybagWithReplyHandler:(id)arg0 ;
-(void)repairAppWithOptions:(id)arg0 replyHandler:(id)arg1 ;


@end


#endif