// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVRMSDAAPREQUESTMANAGER_H
#define TVRMSDAAPREQUESTMANAGER_H

@class NSURLSession, NSString;
@protocol TVRMSDAAPRequestManagerDelegate;

#import <Foundation/Foundation.h>

#import "TVRMSFairPlaySession.h"

@interface TVRMSDAAPRequestManager : NSObject {
    NSURLSession *_urlSession;
}


@property (weak, nonatomic) NSObject<TVRMSDAAPRequestManagerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) TVRMSFairPlaySession *fairPlaySession; // ivar: _fairPlaySession
@property (copy, nonatomic) NSString *homeSharingGroupKey; // ivar: _homeSharingGroupKey
@property (copy, nonatomic) NSString *hostName; // ivar: _hostName
@property (copy, nonatomic) NSString *pairingGUID; // ivar: _pairingGUID
@property (nonatomic) NSInteger port; // ivar: _port
@property (nonatomic) NSInteger sessionIdentifier; // ivar: _sessionIdentifier


-(id)init;
-(id)requestControlCommand:(id)arg0 text:(id)arg1 data:(id)arg2 controlValue:(NSInteger)arg3 promptRevision:(NSInteger)arg4 completionHandler:(id)arg5 ;
-(id)requestControlCommand:(id)arg0 text:(id)arg1 promptRevision:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(id)requestWithPath:(id)arg0 method:(id)arg1 postData:(id)arg2 queryArgs:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif