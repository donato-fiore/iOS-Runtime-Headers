// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VIPMANAGER_H
#define VIPMANAGER_H

@class NSLock, EAEmailAddressSet, NSSet, NSString;
@protocol EMVIPManager, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VIPManager : NSObject <EMVIPManager>

 {
    NSLock *_abPersonByVIPIdentifierLock;
    *__CFDictionary _abPersonByVIPIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy, nonatomic) EAEmailAddressSet *allVIPEmailAddresses;
@property (readonly, copy, nonatomic) NSSet *allVIPs;
@property (readonly, nonatomic) NSObject<EMVIPManager> *backingManager; // ivar: _backingManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasVIPs;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultInstance;
+(struct os_unfair_lock_s *)defaultInstanceLock;
-(*void)existingPersonForVIP:(id)arg0 usingAddressBook:(*void)arg1 ;
-(BOOL)isVIPAddress:(id)arg0 ;
-(id)criterionForEmailAddresses:(id)arg0 ;
-(id)initWithBackingManager:(id)arg0 ;
-(id)sortedVIPs;
-(id)vipCriteria;
-(id)vipForEmailAddresses:(id)arg0 andDisplayNames:(id)arg1 ;
-(id)vipWithIdentifier:(id)arg0 ;
-(void)_vipsDidChange:(id)arg0 ;
-(void)deleteVIPWithIdentifier:(id)arg0 ;
-(void)getAllVIPsWithCompletion:(id)arg0 ;
-(void)removeVIPsWithEmailAddresses:(id)arg0 ;
-(void)removeVIPsWithIdentifiers:(id)arg0 ;
-(void)saveVIP:(id)arg0 ;
-(void)saveVIPs:(id)arg0 ;


@end


#endif