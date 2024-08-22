// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDDIAGNOSTICSERVICE_H
#define ASDDIAGNOSTICSERVICE_H

@class NSString;
@protocol ASDServiceProvider;

#import <Foundation/Foundation.h>

#import "ASDServiceBroker.h"

@interface ASDDiagnosticService : NSObject <ASDServiceProvider>

 {
    ASDServiceBroker *_serviceBroker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultService;
+(id)interface;
-(BOOL)pingWithError:(*id)arg0 ;
-(BOOL)sendCommand:(NSInteger)arg0 withError:(*id)arg1 ;
-(id)activeClientsWithError:(*id)arg0 ;
-(id)sendDetailsCommand:(NSInteger)arg0 timeout:(id)arg1 withError:(*id)arg2 ;
-(id)sendDetailsCommand:(NSInteger)arg0 withError:(*id)arg1 ;
-(void)addSubscriberWithEndpoint:(id)arg0 ;


@end


#endif