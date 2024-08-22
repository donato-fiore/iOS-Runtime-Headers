// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKDEVICEQUERY_H
#define HKDEVICEQUERY_H

@class NSMutableArray, NSString;
@protocol HKDeviceQueryClientInterface;


#import "HKQuery.h"

@interface HKDeviceQuery : HKQuery <HKDeviceQueryClientInterface>

 {
    NSMutableArray *_resultDevices;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) id *resultsHandler; // ivar: _resultsHandler
@property (readonly) Class superclass;


+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
-(id)initWithObjectType:(id)arg0 predicate:(id)arg1 resultsHandler:(id)arg2 ;
-(void)clientRemote_deliverDevices:(id)arg0 done:(BOOL)arg1 reset:(BOOL)arg2 query:(id)arg3 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;


@end


#endif