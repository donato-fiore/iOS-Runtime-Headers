// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BAAPPSTORECLIENT_H
#define BAAPPSTORECLIENT_H


#import <Foundation/Foundation.h>

#import "BAAgentSystemProxy.h"

@interface BAAppStoreClient : NSObject {
    BAAgentSystemProxy *_systemProxy;
}




-(BOOL)performEventWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(BOOL)prepareForAppInstallWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)dealloc;


@end


#endif