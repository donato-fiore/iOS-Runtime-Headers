// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUAPPLICATIONFRAMEWORKASSEMBLY_H
#define NUAPPLICATIONFRAMEWORKASSEMBLY_H

@class NSArray, NSString;
@protocol TFFrameworkAssembly;

#import <Foundation/Foundation.h>


@interface NUApplicationFrameworkAssembly : NSObject <TFFrameworkAssembly>



@property (readonly, copy, nonatomic) NSArray *assemblies; // ivar: _assemblies
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;


@end


#endif