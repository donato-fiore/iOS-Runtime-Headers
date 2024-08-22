// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMFLOGEVENTSESSIONFACTORY_H
#define HMFLOGEVENTSESSIONFACTORY_H

@protocol HMFLogEventSessionFactory;


#import "HMFObject.h"

@interface HMFLogEventSessionFactory : HMFObject <HMFLogEventSessionFactory>





-(id)sessionWithUUID:(id)arg0 serviceName:(id)arg1 uploadImmediately:(BOOL)arg2 commonFields:(id)arg3 ;


@end


#endif