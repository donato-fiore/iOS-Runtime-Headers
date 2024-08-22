// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCASSEMBLY_H
#define TCASSEMBLY_H

@class NSArray;
@protocol TFFrameworkAssembly;

#import <Foundation/Foundation.h>


@interface TCAssembly : NSObject <TFFrameworkAssembly>

 {
    ? assemblies;
}


@property (nonatomic, readonly) NSArray *assemblies;


-(id)init;


@end


#endif