// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTSUBSCRIBER_H
#define CTSUBSCRIBER_H

@class NSData, NSString;
@protocol CoreTelephonyClientSubscriberDelegateInternal, CTSubscriberDelegate;

#import <Foundation/Foundation.h>

#import "CoreTelephonyClient.h"
#import "CTServiceDescriptor.h"

@interface CTSubscriber : NSObject <CoreTelephonyClientSubscriberDelegateInternal>

 {
    queue _queue;
    CoreTelephonyClient *_client;
}


@property (readonly, retain, nonatomic) NSData *carrierToken;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CTSubscriberDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CTServiceDescriptor *descriptor; // ivar: _descriptor
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) Class superclass;


-(BOOL)_isValidMCCMNCString:(id)arg0 max:(NSUInteger)arg1 min:(NSUInteger)arg2 ;
-(BOOL)refreshCarrierToken;
-(BOOL)simInserted;
-(id)init;
-(id)initWithDescriptor:(id)arg0 ;
-(id)initWithDescriptor:(id)arg0 client:(id)arg1 ;
-(id)typeAllocationCode;
-(void)authTokenChanged:(id)arg0 ;
-(void)authenticate:(id)arg0 completion:(id)arg1 ;
-(void)authenticateWithInfo:(id)arg0 handleResult:(id)arg1 ;


@end


#endif