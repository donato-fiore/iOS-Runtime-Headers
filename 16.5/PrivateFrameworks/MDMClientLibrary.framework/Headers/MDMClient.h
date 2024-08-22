// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDMCLIENT_H
#define MDMCLIENT_H



#import "MDMClientCore.h"

@interface MDMClient : MDMClientCore



+(id)sharedClient;
-(BOOL)isManagedByMDM;
-(id)init;


@end


#endif