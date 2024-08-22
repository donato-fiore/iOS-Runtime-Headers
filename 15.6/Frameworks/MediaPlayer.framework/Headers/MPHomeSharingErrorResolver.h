// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPHOMESHARINGERRORRESOLVER_H
#define MPHOMESHARINGERRORRESOLVER_H

@class NSURL, NSData, NSError, NSMutableArray, SSAuthorizationRequest, NSString;
@protocol SSAuthorizationRequestDelegate;


#import "MPAVErrorResolver.h"
#import "MPHomeSharingML3DataProvider.h"

@interface MPHomeSharingErrorResolver : MPAVErrorResolver <SSAuthorizationRequestDelegate>

 {
    NSURL *_keybagURL;
    NSUInteger _accountID;
    NSData *_accountTokenData;
    NSUInteger _downloaderAccountID;
    NSData *_downloaderAccountTokenData;
    NSUInteger _familyAccountID;
    NSError *_error;
    NSMutableArray *_requests;
    SSAuthorizationRequest *_activeRequest;
    BOOL _atLeastOneAuthorizationRequestSuccessful;
}


@property (retain, nonatomic) MPHomeSharingML3DataProvider *dataProvider; // ivar: _dataProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_errorIsFairPlayError:(id)arg0 ;
-(id)initWithKeybagURL:(id)arg0 accountID:(NSUInteger)arg1 accountTokenData:(id)arg2 ;
-(id)initWithKeybagURL:(id)arg0 accountID:(NSUInteger)arg1 accountTokenData:(id)arg2 downloaderAccountID:(NSUInteger)arg3 downloaderAccountTokenData:(id)arg4 familyAccountID:(NSUInteger)arg5 ;
-(void)_performMachineAuthorization;
-(void)_processNextAuthorizationRequest;
-(void)authorizationRequest:(id)arg0 didReceiveResponse:(id)arg1 ;
-(void)dealloc;
-(void)request:(id)arg0 didFailWithError:(id)arg1 ;
-(void)requestDidFinish:(id)arg0 ;
-(void)resolveError:(id)arg0 ;


@end


#endif