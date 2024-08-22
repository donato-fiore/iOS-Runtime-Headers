// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __HMFRTCSESSIONFACTORY_H
#define __HMFRTCSESSIONFACTORY_H

@protocol HMFRTCSessionFactory;

#import <Foundation/Foundation.h>


@interface __HMFRTCSessionFactory : NSObject <HMFRTCSessionFactory>





-(id)sessionWithServiceName:(id)arg0 samplingUUID:(id)arg1 containsRealtime:(BOOL)arg2 ;


@end


#endif