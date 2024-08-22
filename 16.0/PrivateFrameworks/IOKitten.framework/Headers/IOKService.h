// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IOKSERVICE_H
#define IOKSERVICE_H



#import "IOKRegistryEntry.h"

@interface IOKService : IOKRegistryEntry



+(id)addNotificationOfType:(id)arg0 forMatching:(id)arg1 usingNotificationPort:(id)arg2 error:(*id)arg3 withEnumerationBlock:(id)arg4 ;
+(id)addNotificationOfType:(id)arg0 forMatching:(id)arg1 usingNotificationPort:(id)arg2 error:(*id)arg3 withHandler:(id)arg4 ;
+(id)bsdNameMatching:(id)arg0 ;
+(id)entryIDMatching:(NSUInteger)arg0 ;
+(id)matchingService:(id)arg0 ;
+(id)matchingServices:(id)arg0 error:(*id)arg1 ;
+(id)nameMatching:(id)arg0 ;
+(id)serviceMatching:(id)arg0 ;
-(BOOL)isServiceAuthorizedForOpenAllowInteraction:(BOOL)arg0 ;
-(BOOL)matchesPropertyTable:(id)arg0 error:(*id)arg1 ;
-(BOOL)requestProbeWithOptions:(unsigned int)arg0 error:(*id)arg1 ;
-(id)addInterestNotifcationOfType:(id)arg0 usingNotificationPort:(id)arg1 error:(*id)arg2 withHandler:(id)arg3 ;
-(id)connectToServiceOfType:(unsigned int)arg0 ;
-(id)initWithServiceEntry:(unsigned int)arg0 ;
-(unsigned int)busyState;


@end


#endif