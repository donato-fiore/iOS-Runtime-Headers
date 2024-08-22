// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBCLIENT_H
#define CBCLIENT_H


#import <Foundation/Foundation.h>

#import "BrightnessSystemClient.h"
#import "CBAdaptationClient.h"
#import "CBBlueLightClient.h"

@interface CBClient : NSObject {
    BrightnessSystemClient *bsc;
}


@property (readonly) CBAdaptationClient *adaptationClient; // ivar: _adaptationClient
@property (readonly) CBBlueLightClient *blueLightClient; // ivar: _blueLightClient


+(BOOL)supportsAdaptation;
+(BOOL)supportsBlueLightReduction;
-(id)init;
-(void)dealloc;


@end


#endif