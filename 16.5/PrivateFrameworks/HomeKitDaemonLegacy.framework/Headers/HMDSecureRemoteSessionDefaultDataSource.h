// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSECUREREMOTESESSIONDEFAULTDATASOURCE_H
#define HMDSECUREREMOTESESSIONDEFAULTDATASOURCE_H

@class NSString;
@protocol HMDSecureRemoteSessionDataSource;

#import <Foundation/Foundation.h>


@interface HMDSecureRemoteSessionDefaultDataSource : NSObject <HMDSecureRemoteSessionDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createSecureStreamWithPeerDevice:(id)arg0 clientMode:(BOOL)arg1 sessionID:(id)arg2 ;


@end


#endif