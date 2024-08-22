// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQDAEMONOFFERSTUBS_H
#define ICQDAEMONOFFERSTUBS_H

@class NSArray;


#import "ICQDaemonPersisted.h"

@interface ICQDaemonOfferStubs : ICQDaemonPersisted

@property (readonly, nonatomic) NSArray *buddyStubs; // ivar: _buddyStubs
@property (readonly, nonatomic) NSArray *defaultStubs; // ivar: _defaultStubs
@property (readonly, nonatomic) NSArray *premiumStubs; // ivar: _premiumStubs
@property (readonly, nonatomic) NSArray *serverStubs; // ivar: _serverStubs


+(id)daemonOfferStubsDictionarySample;
+(id)persistenceKey;
-(BOOL)_isValidServerStubs:(id)arg0 key:(id)arg1 ;
-(BOOL)_stubsArrayContainsOfferID:(id)arg0 stubs:(id)arg1 ;
-(BOOL)containsOfferID:(id)arg0 ;
-(id)_chooseStubFromServerStubs:(id)arg0 conditions:(id)arg1 ;
-(id)_chooseStubFromServerStubs:(id)arg0 offerType:(NSInteger)arg1 ;
-(id)_initWithAccount:(id)arg0 error:(id)arg1 ;
-(id)_initWithAccount:(id)arg0 serverDictionary:(id)arg1 ;
-(id)chooseBuddyStub;
-(id)chooseBuddyStubForConditions:(id)arg0 ;
-(id)chooseBuddyStubForOfferType:(NSInteger)arg0 ;
-(id)chooseDefaultStub;
-(id)chooseDefaultStubForConditions:(id)arg0 ;
-(id)chooseFirstDefaultStub;
-(id)chooseFirstPremiumStub;
-(id)chooseFirstStub;
-(id)choosePremiumStub;
-(id)choosePremiumStubForConditions:(id)arg0 ;
-(id)chooseStub;
-(id)chooseStubForConditions:(id)arg0 ;
-(id)chooseStubForOfferType:(NSInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)sortedServerStubs:(id)arg0 ;
-(void)_initServerStubsFromServerDictionary;
-(void)setServerDictionary:(id)arg0 ;


@end


#endif