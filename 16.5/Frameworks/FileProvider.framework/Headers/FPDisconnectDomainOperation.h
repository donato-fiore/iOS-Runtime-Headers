// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPDISCONNECTDOMAINOPERATION_H
#define FPDISCONNECTDOMAINOPERATION_H

@class NSProgress;


#import "FPActionOperation.h"
#import "FPProviderDomain.h"

@interface FPDisconnectDomainOperation : FPActionOperation {
    NSProgress *_remoteProgress;
    FPProviderDomain *_domain;
}




-(id)initWithDomain:(id)arg0 ;
-(void)_tryDisconnectingSafely:(BOOL)arg0 ;
-(void)actionMain;
-(void)cancel;


@end


#endif