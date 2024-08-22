// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEHOTSPOTCONFIGURATIONMANAGER_H
#define NEHOTSPOTCONFIGURATIONMANAGER_H


#import <Foundation/Foundation.h>


@interface NEHotspotConfigurationManager : NSObject



+(id)sharedManager;
-(id)errorWithCode:(NSInteger)arg0 ;
-(id)serializeConfiguration:(id)arg0 ;
-(void)applyConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)getConfiguredSSIDsWithCompletionHandler:(id)arg0 ;
-(void)removeConfigurationForHS20DomainName:(id)arg0 ;
-(void)removeConfigurationForSSID:(id)arg0 ;


@end


#endif