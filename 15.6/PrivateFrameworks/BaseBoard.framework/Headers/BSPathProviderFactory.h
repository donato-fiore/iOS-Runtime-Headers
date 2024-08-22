// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSPATHPROVIDERFACTORY_H
#define BSPATHPROVIDERFACTORY_H


#import <Foundation/Foundation.h>


@interface BSPathProviderFactory : NSObject



+(id)pathProviderForCurrentContainer;
+(id)pathProviderForSystemContainerForCurrentProcess;


@end


#endif