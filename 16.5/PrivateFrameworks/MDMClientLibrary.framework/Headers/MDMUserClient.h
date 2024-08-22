// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDMUSERCLIENT_H
#define MDMUSERCLIENT_H



#import "MDMClientCore.h"

@interface MDMUserClient : MDMClientCore



+(id)sharedClient;
-(id)init;


@end


#endif