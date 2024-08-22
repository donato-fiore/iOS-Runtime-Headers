// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDEVENTCOUNTERSPERSISTENTSTORE_H
#define HMDEVENTCOUNTERSPERSISTENTSTORE_H

@protocol HMDEventCountersStoring, HMDPersistentStore;

#import <Foundation/Foundation.h>


@interface HMDEventCountersPersistentStore : NSObject <HMDEventCountersStoring>



@property (readonly, weak, nonatomic) NSObject<HMDPersistentStore> *persistentStore; // ivar: _persistentStore


-(id)initWithPersistentStore:(id)arg0 ;
-(id)unarchive;
-(void)archiveDictionary:(id)arg0 ;


@end


#endif