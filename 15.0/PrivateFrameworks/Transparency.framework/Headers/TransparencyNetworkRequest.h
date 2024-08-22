// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRANSPARENCYNETWORKREQUEST_H
#define TRANSPARENCYNETWORKREQUEST_H

@class NSData, NSURL, NSUUID;

#import <Foundation/Foundation.h>


@interface TransparencyNetworkRequest : NSObject

@property BOOL authenticated; // ivar: _authenticated
@property (retain) NSData *data; // ivar: _data
@property BOOL isGET; // ivar: _isGET
@property CGFloat timeout; // ivar: _timeout
@property (retain) NSURL *url; // ivar: _url
@property (retain) NSUUID *uuid; // ivar: _uuid


+(BOOL)addAccountAuthentication:(id)arg0 error:(*id)arg1 ;
+(void)addDeviceAuthentication:(id)arg0 signature:(id)arg1 timestamp:(id)arg2 certs:(id)arg3 ;
-(id)createGETRequestForURL:(id)arg0 timeout:(CGFloat)arg1 error:(*id)arg2 ;
-(id)createPOSTRequestForURL:(id)arg0 timeout:(CGFloat)arg1 contents:(id)arg2 authentication:(id)arg3 fetchAuthNow:(BOOL)arg4 completionHandler:(id)arg5 ;
-(id)initGETWithURL:(id)arg0 ;
-(id)initPOSTWithURL:(id)arg0 data:(id)arg1 uuid:(id)arg2 ;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithURL:(id)arg0 data:(id)arg1 timeout:(CGFloat)arg2 isGET:(BOOL)arg3 uuid:(id)arg4 ;
-(void)createRequestForAuthentication:(id)arg0 completionHandler:(id)arg1 ;
-(void)createRequestForAuthentication:(id)arg0 fetchAuthNow:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif