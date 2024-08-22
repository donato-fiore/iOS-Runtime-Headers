// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSXPCSERVICECONNECTIONROOTCONTEXT_H
#define BSXPCSERVICECONNECTIONROOTCONTEXT_H

@class NSString;


#import "BSXPCServiceConnectionContext.h"

@interface BSXPCServiceConnectionRootContext : BSXPCServiceConnectionContext {
    NSUInteger _unique;
    uint8_t __uniqueChildCounter;
    NSString *_eDesc;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isRoot;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)endpointDescription;


@end


#endif