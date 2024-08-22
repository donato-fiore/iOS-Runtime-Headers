// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AUHELPERINSTANCE_H
#define AUHELPERINSTANCE_H

@class NSXPCConnection;
@protocol AUHelperServiceProtocol;

#import <Foundation/Foundation.h>


@interface AUHelperInstance : NSObject {
    NSXPCConnection *_xpcConnection;
}


@property (readonly) NSObject<AUHelperServiceProtocol> *remoteObject;


+(id)sharedInstance;
+(id)xpcConnectionToHelper;
-(id)init;


@end


#endif