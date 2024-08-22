// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDTEMPORALINTERACTIONADVISOR_H
#define _CDTEMPORALINTERACTIONADVISOR_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_CDInteractionStore.h"

@interface _CDTemporalInteractionAdvisor : NSObject

@property (retain, nonatomic) NSMutableDictionary *consumerToModelMap; // ivar: _consumerToModelMap
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue; // ivar: _dataQueue
@property int settingsNotifyToken; // ivar: _settingsNotifyToken
@property (retain) _CDInteractionStore *store; // ivar: _store


-(id)adviseInteractionsForDate:(id)arg0 usingSettings:(id)arg1 ;
-(id)initWithStore:(id)arg0 ;
-(id)rankContacts:(id)arg0 usingSettings:(id)arg1 ;
-(id)rankerForDate:(id)arg0 settings:(id)arg1 ;
-(void)dealloc;
-(void)updateConsumerModel;


@end


#endif