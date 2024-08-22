// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORESOURCEREQUESTER_H
#define GEORESOURCEREQUESTER_H

@protocol GEOResourceRequesterProxy;

#import <Foundation/Foundation.h>


@interface GEOResourceRequester : NSObject {
    id<GEOResourceRequesterProxy> *_proxy;
}




+(id)sharedRequester;
+(void)setProxyClass:(Class)arg0 ;
-(id)init;
-(id)initWithProxy:(id)arg0 ;
-(void)fetchResources:(id)arg0 force:(BOOL)arg1 manifestConfiguration:(id)arg2 auditToken:(id)arg3 queue:(id)arg4 handler:(id)arg5 ;
-(void)fetchResources:(id)arg0 force:(BOOL)arg1 manifestConfiguration:(id)arg2 auditToken:(id)arg3 signpostID:(NSUInteger)arg4 queue:(id)arg5 handler:(id)arg6 ;


@end


#endif