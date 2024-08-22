// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVFIGROUTINGCONTEXTCOMMANDOUTPUTDEVICECONFIGURATION_H
#define AVFIGROUTINGCONTEXTCOMMANDOUTPUTDEVICECONFIGURATION_H

@class NSString, NSData, NSArray;
@protocol AVOutputDeviceConfigurationRetrieval;

#import <Foundation/Foundation.h>


@interface AVFigRoutingContextCommandOutputDeviceConfiguration : NSObject <AVOutputDeviceConfigurationRetrieval>

 {
    *__CFDictionary _response;
}


@property (readonly, nonatomic) BOOL automaticallyAllowsConnectionsFromPeersInHomeGroup;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *devicePassword;
@property (readonly, nonatomic) NSData *devicePublicKey;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL onlyAllowsConnectionsFromPeersInHomeGroup;
@property (readonly, nonatomic) NSArray *peersInHomeGroup;
@property (readonly) Class superclass;


+(void)initialize;
-(id)init;
-(id)initWithRoutingContextComandResponse:(struct __CFDictionary *)arg0 ;
-(void)dealloc;


@end


#endif