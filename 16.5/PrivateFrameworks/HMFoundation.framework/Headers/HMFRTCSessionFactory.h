// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMFRTCSESSIONFACTORY_H
#define HMFRTCSESSIONFACTORY_H

@protocol HMFRTCSessionFactory;

#import <Foundation/Foundation.h>


@interface HMFRTCSessionFactory : NSObject <HMFRTCSessionFactory>





-(id)sessionWithServiceName:(id)arg0 samplingUUID:(id)arg1 containsRealtime:(BOOL)arg2 ;


@end


#endif