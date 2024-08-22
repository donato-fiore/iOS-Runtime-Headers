// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRINAMESPACEDESCRIPTORSETEXTERNALREFSTORE_H
#define TRINAMESPACEDESCRIPTORSETEXTERNALREFSTORE_H

@protocol TRIPathReferencing;

#import <Foundation/Foundation.h>

#import "TRIServerContext.h"

@interface TRINamespaceDescriptorSetExternalRefStore : NSObject <TRIPathReferencing>

 {
    TRIServerContext *_context;
}




-(BOOL)hasReferenceToPath:(id)arg0 ;
-(id)initWithServerContext:(id)arg0 ;


@end


#endif