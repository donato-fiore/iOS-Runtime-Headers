// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSEXTERNALPLUGINBASE_H
#define MPSEXTERNALPLUGINBASE_H

@class NSString;
@protocol MPSExternalPluginBase, MTLDevice;

#import <Foundation/Foundation.h>

#import "MPSExternalPluginBase.h"

@interface MPSExternalPluginBase : NSObject <MPSExternalPluginBase>

 {
    MPSExternalPluginBase *_self;
    id<MTLDevice> *_device;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)maxBatchSize;
-(id)device;
-(id)init;
-(id)initWithDevice:(id)arg0 ;


@end


#endif