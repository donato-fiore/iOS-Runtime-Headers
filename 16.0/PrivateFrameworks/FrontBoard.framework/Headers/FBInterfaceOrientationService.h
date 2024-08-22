// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBINTERFACEORIENTATIONSERVICE_H
#define FBINTERFACEORIENTATIONSERVICE_H


#import <Foundation/Foundation.h>

#import "FBInterfaceOrientationServiceServer.h"

@interface FBInterfaceOrientationService : NSObject {
    FBInterfaceOrientationServiceServer *_server;
}


@property (readonly, nonatomic) NSInteger interfaceOrientation; // ivar: _interfaceOrientation


+(id)sharedInstance;
-(id)init;


@end


#endif