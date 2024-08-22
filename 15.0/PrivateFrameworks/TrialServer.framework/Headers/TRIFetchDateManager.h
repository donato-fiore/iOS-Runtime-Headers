// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIFETCHDATEMANAGER_H
#define TRIFETCHDATEMANAGER_H

@protocol TRIDateProviding;

#import <Foundation/Foundation.h>

#import "TRIKVStore.h"

@interface TRIFetchDateManager : NSObject <TRIDateProviding>

 {
    TRIKVStore *_keyValueStore;
}




+(id)kvstoreKeyForType:(unsigned char)arg0 container:(int)arg1 teamId:(id)arg2 ;
+(id)managerWithKeyValueStore:(id)arg0 ;
-(id)init;
-(id)initWithKeyValueStore:(id)arg0 ;
-(id)lastFetchDateWithType:(unsigned char)arg0 container:(int)arg1 teamId:(id)arg2 ;
-(void)setLastFetchDate:(id)arg0 type:(unsigned char)arg1 container:(int)arg2 teamId:(id)arg3 ;


@end


#endif