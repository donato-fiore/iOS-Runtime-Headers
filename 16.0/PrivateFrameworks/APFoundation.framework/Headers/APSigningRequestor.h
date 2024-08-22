// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APSIGNINGREQUESTOR_H
#define APSIGNINGREQUESTOR_H

@class NSString;
@protocol APSigningXPC;


#import "APXPCActionRequester.h"

@interface APSigningRequestor : APXPCActionRequester <APSigningXPC>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canShareConnection;
+(id)machService;
-(id)remoteObjectInterface;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)requestCertificate:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)rotate;


@end


#endif