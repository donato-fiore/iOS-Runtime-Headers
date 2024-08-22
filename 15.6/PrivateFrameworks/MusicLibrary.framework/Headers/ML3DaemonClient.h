// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3DAEMONCLIENT_H
#define ML3DAEMONCLIENT_H



#import "ML3Client.h"

@interface ML3DaemonClient : ML3Client



+(id)sharedDaemonClient;
-(id)bundleID;
-(id)init;
-(id)name;
-(int)processID;


@end


#endif