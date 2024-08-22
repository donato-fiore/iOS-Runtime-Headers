// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXFRAMEWORKASSEMBLY_H
#define SXFRAMEWORKASSEMBLY_H

@class NSArray, NSString;
@protocol TFFrameworkAssembly;

#import <Foundation/Foundation.h>


@interface SXFrameworkAssembly : NSObject <TFFrameworkAssembly>



@property (readonly, copy, nonatomic) NSArray *assemblies; // ivar: _assemblies
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;


@end


#endif