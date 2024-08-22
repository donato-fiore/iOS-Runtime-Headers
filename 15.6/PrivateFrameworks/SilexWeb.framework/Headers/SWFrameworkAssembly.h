// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SWFRAMEWORKASSEMBLY_H
#define SWFRAMEWORKASSEMBLY_H

@class NSArray, NSString;
@protocol TFFrameworkAssembly;

#import <Foundation/Foundation.h>


@interface SWFrameworkAssembly : NSObject <TFFrameworkAssembly>



@property (readonly, copy, nonatomic) NSArray *assemblies; // ivar: _assemblies
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;


@end


#endif