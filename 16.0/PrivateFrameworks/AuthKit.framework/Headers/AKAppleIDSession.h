// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKAPPLEIDSESSION_H
#define AKAPPLEIDSESSION_H

@class NSString, NSLock;
@protocol NSURLSessionAppleIDContext, AKAnisetteServiceProtocol;

#import <Foundation/Foundation.h>

#import "AKAnisetteProvisioningController.h"
#import "AKAnisetteData.h"
#import "AKDevice.h"

@interface AKAppleIDSession : NSObject <NSURLSessionAppleIDContext>

 {
    NSString *_serviceID;
    AKAnisetteProvisioningController *_nativeAnisetteController;
    AKAnisetteProvisioningController *_pairedDeviceAnisetteController;
    AKAnisetteData *_proxiedAnisetteData;
    NSLock *_anisetteControllerLock;
}


@property (retain, nonatomic) NSObject<AKAnisetteServiceProtocol> *anisetteDataProvider; // ivar: _anisetteDataProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AKDevice *pairedDevice; // ivar: _pairedDevice
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)_generateAppleIDHeadersForRequest:(id)arg0 error:(*id)arg1 ;
-(id)_genericAppleIDHeadersDictionaryForRequest:(id)arg0 ;
-(id)_nativeAnisetteController;
-(id)appleIDHeadersForRequest:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)relevantHTTPStatusCodes;
-(void)URLSession:(id)arg0 task:(id)arg1 getAppleIDHeadersForResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 getAppleIDRequestOrHeadersForResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)_generateAppleIDHeadersForSessionTask:(id)arg0 withCompletion:(id)arg1 ;
-(void)_handleAnissetteURLResponse:(id)arg0 forRequest:(id)arg1 withCompletion:(id)arg2 ;
-(void)_handleURLSwitchingResponse:(id)arg0 forRequest:(id)arg1 withCompletion:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleResponse:(id)arg0 forRequest:(id)arg1 shouldRetry:(*BOOL)arg2 ;


@end


#endif