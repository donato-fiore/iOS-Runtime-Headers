// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPMADRESOURCELOCK_H
#define VCPMADRESOURCELOCK_H


#import <Foundation/Foundation.h>

#import "VCPMADResourceManager.h"
#import "VCPMADResource.h"

@interface VCPMADResourceLock : NSObject {
    VCPMADResourceManager *_resourceManager;
    VCPMADResource *_resource;
}




-(id)initWithResourceManager:(id)arg0 andResource:(id)arg1 ;
-(void)dealloc;
-(void)reset;


@end


#endif