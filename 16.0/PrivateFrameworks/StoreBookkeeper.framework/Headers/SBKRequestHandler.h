// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBKREQUESTHANDLER_H
#define SBKREQUESTHANDLER_H


#import <Foundation/Foundation.h>

#import "SBKStoreURLBagContext.h"

@interface SBKRequestHandler : NSObject

@property (readonly, nonatomic) SBKStoreURLBagContext *bagContext; // ivar: _bagContext


-(id)initWithBagContext:(id)arg0 ;
-(void)cancel;
-(void)timeout;


@end


#endif