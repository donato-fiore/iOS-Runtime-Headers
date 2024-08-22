// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNFILESERVERDISCOVERYRESULT_H
#define SNFILESERVERDISCOVERYRESULT_H

@class NSString;
@protocol SNResult;

#import <Foundation/Foundation.h>

#import "SNFileServerInfo.h"

@interface SNFileServerDiscoveryResult : NSObject <SNResult>

 {
    SNFileServerInfo *_serverInfo;
    NSUInteger _state;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) SNFileServerInfo *serverInfo;
@property (readonly) NSUInteger state;
@property (readonly) Class superclass;




@end


#endif