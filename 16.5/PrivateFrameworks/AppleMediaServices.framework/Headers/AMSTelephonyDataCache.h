// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSTELEPHONYDATACACHE_H
#define AMSTELEPHONYDATACACHE_H

@class CTXPCContexts, NSArray, CoreTelephonyClient, NSString;
@protocol CoreTelephonyClientDelegate, CoreTelephonyClientSuppServicesDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AMSTelephonyDataCache : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSuppServicesDelegate>



@property (readonly, nonatomic) CTXPCContexts *activeContexts; // ivar: _activeContexts
@property (readonly, nonatomic) NSArray *carrierNames;
@property (retain, nonatomic) CoreTelephonyClient *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)sharedCache;
-(id)carrierNamesWithError:(*id)arg0 ;
-(id)initWithClientClass:(Class)arg0 ;
-(id)initWithTelephonyClient:(id)arg0 queue:(id)arg1 ;
-(void)_clearCaches:(id)arg0 ;
-(void)activeSubscriptionsDidChange;
-(void)phoneNumberChanged:(id)arg0 ;


@end


#endif