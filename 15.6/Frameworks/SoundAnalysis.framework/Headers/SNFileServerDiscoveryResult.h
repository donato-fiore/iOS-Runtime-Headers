// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNFILESERVERDISCOVERYRESULT_H
#define SNFILESERVERDISCOVERYRESULT_H

@class NSString;
@protocol SNResult;

#import <Foundation/Foundation.h>

#import "SNFileServerInfo.h"

@interface SNFileServerDiscoveryResult : NSObject <SNResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SNFileServerInfo *serverInfo; // ivar: _serverInfo
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


-(id)initWithServerInfo:(id)arg0 state:(NSUInteger)arg1 ;


@end


#endif