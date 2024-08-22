// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APSIGNINGSERVERREQUESTOR_H
#define APSIGNINGSERVERREQUESTOR_H


#import <Foundation/Foundation.h>


@interface APSigningServerRequestor : NSObject



-(id)init;
-(void)requestCertificate:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)requestSetupForData:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif