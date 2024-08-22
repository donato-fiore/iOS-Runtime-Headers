// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISTATERESTORATIONCONTEXT_H
#define SKUISTATERESTORATIONCONTEXT_H


#import <Foundation/Foundation.h>

#import "SKUIClientContext.h"

@interface SKUIStateRestorationContext : NSObject

@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext


+(id)sharedContext;
+(void)setSharedContext:(id)arg0 ;


@end


#endif