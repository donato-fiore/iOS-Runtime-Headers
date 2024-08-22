// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKDISCOVERYBONJOURRESOLVECONTAINER_H
#define GKDISCOVERYBONJOURRESOLVECONTAINER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "GKDiscoveryBonjour.h"

@interface GKDiscoveryBonjourResolveContainer : NSObject

@property (nonatomic) GKDiscoveryBonjour *context; // ivar: _context
@property (copy, nonatomic) id *resolveCompletionHandler; // ivar: _resolveCompletionHandler
@property (retain, nonatomic) NSMutableArray *serviceRefList; // ivar: _serviceRefList


-(id)init;
-(void)dealloc;


@end


#endif