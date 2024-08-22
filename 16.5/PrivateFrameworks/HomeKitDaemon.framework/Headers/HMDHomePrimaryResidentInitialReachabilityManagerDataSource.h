// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEPRIMARYRESIDENTINITIALREACHABILITYMANAGERDATASOURCE_H
#define HMDHOMEPRIMARYRESIDENTINITIALREACHABILITYMANAGERDATASOURCE_H

@class NSString;
@protocol HMDHomePrimaryResidentInitialReachabilityManagerDataSource;

#import <Foundation/Foundation.h>


@interface HMDHomePrimaryResidentInitialReachabilityManagerDataSource : NSObject <HMDHomePrimaryResidentInitialReachabilityManagerDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)dataValueFromNoBackupStoreWithKey:(id)arg0 ;
-(void)persistDataValueToNoBackupStore:(id)arg0 withKey:(id)arg1 ;


@end


#endif