// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKASMPREEMPTIVEIDSMESSAGINGROSTERPROVIDER_H
#define CRKASMPREEMPTIVEIDSMESSAGINGROSTERPROVIDER_H

@class NSSet, NSURL;
@protocol CRKIDSAddressTranslator, CRKIDSPrimitives, CRKKeyedDataStoreProtocol;


#import "CRKASMRosterProviderDecoratorBase.h"

@interface CRKASMPreemptiveIDSMessagingRosterProvider : CRKASMRosterProviderDecoratorBase

@property (readonly, nonatomic) NSObject<CRKIDSAddressTranslator> *IDSAddressTranslator; // ivar: _IDSAddressTranslator
@property (readonly, nonatomic) NSObject<CRKIDSPrimitives> *IDSPrimitives; // ivar: _IDSPrimitives
@property (readonly, nonatomic) NSObject<CRKKeyedDataStoreProtocol> *dataStore; // ivar: _dataStore
@property (retain, nonatomic) NSSet *messagedAppleIDs; // ivar: _messagedAppleIDs
@property (readonly, nonatomic) NSURL *messagedAppleIDsURL; // ivar: _messagedAppleIDsURL
@property (nonatomic, getter=isObservingRoster) BOOL observingRoster; // ivar: _observingRoster


+(id)appleIDsFromData:(id)arg0 error:(*id)arg1 ;
+(id)dataForAppleIDs:(id)arg0 error:(*id)arg1 ;
+(id)observedKeyPaths;
+(id)trustedUserAppleIDsFromRoster:(id)arg0 ;
-(BOOL)persistAppleIDs:(id)arg0 withError:(*id)arg1 ;
-(id)fetchMessagedAppleIDsWitherror:(*id)arg0 ;
-(id)initWithRosterProvider:(id)arg0 IDSPrimitives:(id)arg1 IDSAddressTranslator:(id)arg2 dataStore:(id)arg3 ;
-(void)beginObservingRoster;
-(void)dealloc;
-(void)endObservingRoster;
-(void)messageAppleID:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)rosterDidChange;


@end


#endif