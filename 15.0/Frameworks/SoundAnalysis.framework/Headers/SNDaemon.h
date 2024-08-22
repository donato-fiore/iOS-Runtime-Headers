// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNDAEMON_H
#define SNDAEMON_H


#import <Foundation/Foundation.h>

#import "SNFileServer.h"

@interface SNDaemon : NSObject {
    SNFileServer *_fileServer;
}




+(BOOL)isCurrentProcessEntitledToHostDaemon;
+(id)createFileServer;
-(id)init;
-(void)run;


@end


#endif