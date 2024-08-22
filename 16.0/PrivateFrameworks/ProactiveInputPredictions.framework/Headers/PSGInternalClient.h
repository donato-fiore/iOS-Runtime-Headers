// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSGINTERNALCLIENT_H
#define PSGINTERNALCLIENT_H

@class _PASXPCClientHelper;

#import <Foundation/Foundation.h>


@interface PSGInternalClient : NSObject {
    _PASXPCClientHelper *_clientHelper;
}




+(id)sharedInstance;
-(id)_remoteObjectProxy;
-(id)init;
-(id)sysdiagnoseInformationWithError:(*id)arg0 ;


@end


#endif