// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASSETRESOURCEVALIDATEDCONTEXT_H
#define PHASSETRESOURCEVALIDATEDCONTEXT_H

@class NSData, NSURL;

#import <Foundation/Foundation.h>

#import "PHExternalAssetResource.h"

@interface PHAssetResourceValidatedContext : NSObject

@property (readonly, nonatomic) PHExternalAssetResource *resource; // ivar: _resource
@property (readonly, nonatomic) NSData *validatedData; // ivar: _validatedData
@property (readonly, nonatomic) NSURL *validatedURL; // ivar: _validatedURL


-(id)initWithResource:(id)arg0 validatedURL:(id)arg1 validatedData:(id)arg2 ;


@end


#endif