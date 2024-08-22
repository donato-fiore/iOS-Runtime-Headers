// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKAUTHCONTEXT_H
#define TKAUTHCONTEXT_H

@class NSData, LAContext;

#import <Foundation/Foundation.h>

#import "TKSharedResource.h"

@interface TKAuthContext : NSObject

@property (readonly, nonatomic) NSData *ACMHandle; // ivar: _ACMHandle
@property (readonly, nonatomic) LAContext *authContext; // ivar: _authContext
@property (readonly, nonatomic) TKSharedResource *sharedResource; // ivar: _sharedResource


-(id)initWithLAContext:(id)arg0 ACMHandle:(id)arg1 sharedResource:(id)arg2 ;


@end


#endif