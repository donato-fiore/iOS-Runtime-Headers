// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSNSURLSESSIONDSERVICE_H
#define CHSNSURLSESSIONDSERVICE_H


#import <Foundation/Foundation.h>

#import "CHSChronoServicesConnection.h"

@interface CHSNSURLSessiondService : NSObject {
    CHSChronoServicesConnection *_connection;
}




-(id)URLSessionDidCompleteForExtensionWithBundleIdentifier:(id)arg0 info:(id)arg1 ;
-(id)init;
-(id)initWithConnection:(id)arg0 ;


@end


#endif