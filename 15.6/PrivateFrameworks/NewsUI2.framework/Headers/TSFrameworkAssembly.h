// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSFRAMEWORKASSEMBLY_H
#define TSFRAMEWORKASSEMBLY_H

@class NSArray;
@protocol TFFrameworkAssembly;

#import <Foundation/Foundation.h>


@interface TSFrameworkAssembly : NSObject <TFFrameworkAssembly>

 {
    ? featureAvailabilityProvider;
}


@property (nonatomic, readonly) NSArray *assemblies;


-(id)init;
-(id)initWithNewsAppConfiguration:(id)arg0 ;


@end


#endif