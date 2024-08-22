// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AADAEMONCONTROLLER_H
#define AADAEMONCONTROLLER_H

@class NSString, AAFXPCSession;
@protocol AAFXPCSessionDelegate, AADaemonProtocol;

#import <Foundation/Foundation.h>


@interface AADaemonController : NSObject <AAFXPCSessionDelegate, AADaemonProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AAFXPCSession *remoteService; // ivar: _remoteService
@property (readonly) Class superclass;


-(id)init;
-(void)configureRemoteInterface:(id)arg0 ;
-(void)handleAppleAccountDeleteForAccount:(id)arg0 completion:(id)arg1 ;


@end


#endif