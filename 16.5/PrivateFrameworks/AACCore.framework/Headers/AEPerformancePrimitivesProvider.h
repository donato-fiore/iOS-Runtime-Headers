// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AEPERFORMANCEPRIMITIVESPROVIDER_H
#define AEPERFORMANCEPRIMITIVESPROVIDER_H


#import <Foundation/Foundation.h>

#import "AEOSGestalt.h"

@interface AEPerformancePrimitivesProvider : NSObject {
    AEOSGestalt *_OSGestalt;
}




-(id)init;
-(id)makePrimitives;


@end


#endif