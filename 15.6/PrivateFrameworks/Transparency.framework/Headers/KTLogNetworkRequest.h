// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KTLOGNETWORKREQUEST_H
#define KTLOGNETWORKREQUEST_H

@class NSString;


#import "TransparencyNetworkRequest.h"

@interface KTLogNetworkRequest : TransparencyNetworkRequest

@property (retain) NSString *application; // ivar: _application


-(id)createGETRequestForURL:(id)arg0 timeout:(CGFloat)arg1 error:(*id)arg2 ;
-(id)initGETWithURL:(id)arg0 application:(id)arg1 ;
-(id)initPOSTWithURL:(id)arg0 data:(id)arg1 uuid:(id)arg2 application:(id)arg3 ;
-(void)createRequestForAuthentication:(id)arg0 completionHandler:(id)arg1 ;
-(void)createRequestForAuthentication:(id)arg0 fetchAuthNow:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif