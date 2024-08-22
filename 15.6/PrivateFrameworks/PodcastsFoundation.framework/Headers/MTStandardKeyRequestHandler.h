// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTSTANDARDKEYREQUESTHANDLER_H
#define MTSTANDARDKEYREQUESTHANDLER_H

@protocol MTSecureKeyRequestHandler;


#import "IMBaseStoreService.h"

@interface MTStandardKeyRequestHandler : IMBaseStoreService <MTSecureKeyRequestHandler>

 {
    ? requestQueue;
}




+(id)keyRequestLicenseErrorDomain;
-(id)init;
-(id)initWithConcurrentOperationCount:(NSInteger)arg0 requestEncodingType:(NSUInteger)arg1 ;
-(void)loadCertificateDataWithCompletion:(id)arg0 ;
-(void)loadKeyDataFor:(id)arg0 account:(id)arg1 completion:(id)arg2 ;


@end


#endif