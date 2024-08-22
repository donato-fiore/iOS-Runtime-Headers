// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIJSTELEPHONY_H
#define SKUIJSTELEPHONY_H

@class IKJSObject, NSString;
@protocol SKUIJSTelephony, OS_dispatch_queue;



@interface SKUIJSTelephony : IKJSObject <SKUIJSTelephony>

 {
    BOOL _isObserving;
    NSObject<OS_dispatch_queue> *_telephonyQueue;
    *__CTServerConnection _telephonyServer;
}


@property (readonly, nonatomic, getter=isCellularRoaming) BOOL cellularRoaming;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSString *mobileCountryCode;
@property (readonly, nonatomic) NSString *mobileNetworkCode;
@property (readonly, nonatomic) NSString *operatorName;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSString *providerName;


-(id)formattedPhoneNumber:(id)arg0 ;
-(id)initWithAppContext:(id)arg0 ;
-(struct __CTServerConnection *)_telephonyServer;
-(void)beginObserving;
-(void)dealloc;
-(void)sendSMSWithBodyText:(id)arg0 ;


@end


#endif