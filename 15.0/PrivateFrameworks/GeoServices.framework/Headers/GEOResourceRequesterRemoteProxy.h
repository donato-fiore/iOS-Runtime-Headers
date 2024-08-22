// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORESOURCEREQUESTERREMOTEPROXY_H
#define GEORESOURCEREQUESTERREMOTEPROXY_H

@class NSString;
@protocol GEOResourceRequesterProxy;

#import <Foundation/Foundation.h>


@interface GEOResourceRequesterRemoteProxy : NSObject <GEOResourceRequesterProxy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)fetchResources:(id)arg0 force:(BOOL)arg1 manifestConfiguration:(id)arg2 auditToken:(id)arg3 signpostID:(NSUInteger)arg4 queue:(id)arg5 handler:(id)arg6 ;


@end


#endif