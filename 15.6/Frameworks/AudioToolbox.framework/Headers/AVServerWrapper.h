// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVSERVERWRAPPER_H
#define AVSERVERWRAPPER_H


#import <Foundation/Foundation.h>

#import "AVHapticServerInstance.h"

@interface AVServerWrapper : NSObject

@property (readonly, weak) AVHapticServerInstance *serverInstance; // ivar: _serverInstance


-(BOOL)contains:(id)arg0 ;
-(id)initWithServerInstance:(id)arg0 ;


@end


#endif