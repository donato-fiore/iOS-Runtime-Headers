// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKURLCONTEXT_H
#define MKURLCONTEXT_H

@class GEOCompanionRouteContext;

#import <Foundation/Foundation.h>


@interface MKURLContext : NSObject

@property (readonly, copy, nonatomic) GEOCompanionRouteContext *companionRouteContext; // ivar: _companionRouteContext
@property (readonly, nonatomic) BOOL originatedFromWatch; // ivar: _originatedFromWatch


-(id)initWithOriginatedFromWatch:(BOOL)arg0 companionRouteContext:(id)arg1 ;


@end


#endif