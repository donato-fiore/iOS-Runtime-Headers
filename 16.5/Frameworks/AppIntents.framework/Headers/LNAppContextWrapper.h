// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNAPPCONTEXTWRAPPER_H
#define LNAPPCONTEXTWRAPPER_H


#import <Foundation/Foundation.h>

#import "LNAppContext.h"

@interface LNAppContextWrapper : NSObject

@property (readonly, nonatomic) LNAppContext *appContext; // ivar: _appContext


-(id)init;
-(void)performAction:(id)arg0 options:(id)arg1 delegate:(id)arg2 auditToken:(struct ? )arg3 completionHandler:(id)arg4 ;


@end


#endif