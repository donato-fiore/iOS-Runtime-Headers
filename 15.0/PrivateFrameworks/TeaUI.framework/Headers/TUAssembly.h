// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUASSEMBLY_H
#define TUASSEMBLY_H

@class NSArray;
@protocol TFFrameworkAssembly;

#import <Foundation/Foundation.h>


@interface TUAssembly : NSObject <TFFrameworkAssembly>

 {
    ? assemblies;
}


@property (nonatomic, readonly) NSArray *assemblies;


-(id)init;


@end


#endif