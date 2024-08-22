// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3PROCESSCLIENT_H
#define ML3PROCESSCLIENT_H



#import "ML3Client.h"

@interface ML3ProcessClient : ML3Client



+(id)sharedProcessClient;
-(id)bundleID;
-(id)init;
-(id)name;
-(int)processID;


@end


#endif