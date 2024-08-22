// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSCONTEXTPROVIDERSERVICEFINDER_H
#define CLSCONTEXTPROVIDERSERVICEFINDER_H

@class NSDictionary, NSMutableArray, NSArray;
@protocol CLSContextProviderServiceFinderDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CLSContextProviderServiceFinder : NSObject {
    id<CLSContextProviderServiceFinderDelegate> *_delegate;
    id *_extensionsFinderContext;
    NSObject<OS_dispatch_queue> *_servicesQueue;
    NSDictionary *_extensionAttributes;
    NSMutableArray *_mutableAvailableServices;
}


@property (readonly, copy, nonatomic) NSArray *availableServices;


-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif