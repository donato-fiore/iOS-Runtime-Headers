// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COMUTABLESTATECLIENTINFO_H
#define COMUTABLESTATECLIENTINFO_H

@class NSDictionary;


#import "COStateClientInfo.h"

@interface COMutableStateClientInfo : COStateClientInfo

@property (copy, nonatomic) NSDictionary *observers;
@property (copy, nonatomic) NSDictionary *state;


-(id)initWithSuite:(id)arg0 clusters:(id)arg1 state:(id)arg2 observers:(id)arg3 ;
-(void)addObserverWithPredicate:(id)arg0 ;
-(void)removeKeyPath:(id)arg0 cluster:(id)arg1 ;
-(void)removeObserverWithPredicate:(id)arg0 ;
-(void)setValue:(id)arg0 forKeyPath:(id)arg1 cluster:(id)arg2 ;


@end


#endif