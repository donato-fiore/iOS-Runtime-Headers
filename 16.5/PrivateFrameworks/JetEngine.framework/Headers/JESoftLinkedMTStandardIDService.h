// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JESOFTLINKEDMTSTANDARDIDSERVICE_H
#define JESOFTLINKEDMTSTANDARDIDSERVICE_H

@class MTStandardIDService;

#import <Foundation/Foundation.h>


@interface JESoftLinkedMTStandardIDService : NSObject

@property (retain, nonatomic) MTStandardIDService *backing; // ivar: _backing


-(id)idFieldsForTopic:(id)arg0 ;
-(id)idFieldsForTopic:(id)arg0 options:(id)arg1 ;
-(id)initWithAMSBag:(id)arg0 ;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)mtPromiseToAMSPromise:(id)arg0 ;
-(id)resetIDForTopics:(id)arg0 ;
-(id)secretValueForNamespace:(id)arg0 options:(id)arg1 ;
-(id)sync;
-(void)performMaintenanceWithCompletion:(id)arg0 ;
-(void)queryIDForTopic:(id)arg0 type:(NSInteger)arg1 completion:(id)arg2 ;
-(void)queryIDForTopic:(id)arg0 type:(NSInteger)arg1 options:(id)arg2 completion:(id)arg3 ;


@end


#endif