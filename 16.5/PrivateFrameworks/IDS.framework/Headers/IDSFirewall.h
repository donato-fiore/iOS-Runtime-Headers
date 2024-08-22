// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSFIREWALL_H
#define IDSFIREWALL_H

@class NSSet, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IDSFirewall : NSObject

@property (readonly, nonatomic) NSSet *impactedServiceIdentifiers; // ivar: _impactedServiceIdentifiers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSString *service; // ivar: _service


-(id)_removeInvalidEntries:(id)arg0 ;
-(id)description;
-(id)initWithService:(id)arg0 queue:(id)arg1 ;
-(void)addEntries:(id)arg0 withCompletion:(id)arg1 ;
-(void)currentDonatedEntries:(id)arg0 ;
-(void)currentEntries:(id)arg0 ;
-(void)donateEntries:(id)arg0 withCompletion:(id)arg1 ;
-(void)populateImpactedServices:(id)arg0 ;
-(void)recentlyBlockedEntries:(id)arg0 ;
-(void)removeAllDonatedEntries:(id)arg0 ;
-(void)removeAllEntries:(id)arg0 ;
-(void)removeDonatedEntries:(id)arg0 withCompletion:(id)arg1 ;
-(void)removeEntries:(id)arg0 withCompletion:(id)arg1 ;
-(void)replaceAllEntriesWithEntries:(id)arg0 withCompletion:(id)arg1 ;
-(void)replaceDonatedEntriesWithEntries:(id)arg0 withCompletion:(id)arg1 ;
-(void)replaceEntries:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif