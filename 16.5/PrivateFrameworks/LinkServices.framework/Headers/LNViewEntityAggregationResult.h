// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNVIEWENTITYAGGREGATIONRESULT_H
#define LNVIEWENTITYAGGREGATIONRESULT_H

@class NSMutableDictionary, NSDictionary, NSError;

#import <Foundation/Foundation.h>


@interface LNViewEntityAggregationResult : NSObject {
    NSMutableDictionary *_entitiesByBundleId;
    NSMutableDictionary *_errors;
    os_unfair_lock_s _lock;
}


@property (readonly, copy, nonatomic) NSDictionary *entities;
@property (readonly, copy, nonatomic) NSError *error;


-(id)init;
-(void)addResults:(id)arg0 error:(id)arg1 forBundle:(id)arg2 ;


@end


#endif