// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMFCONTACTUTILITY_H
#define FMFCONTACTUTILITY_H

@class CNContactFormatter, CNContactStore;

#import <Foundation/Foundation.h>


@interface FMFContactUtility : NSObject

@property (retain, nonatomic) CNContactFormatter *contactFormatter; // ivar: _contactFormatter
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore


+(id)sharedInstance;
-(id)contactKeys;
-(id)displayNameForContact:(id)arg0 andHandle:(id)arg1 ;
-(id)findOptimalContactInContacts:(id)arg0 ;
-(id)getContactForHandle:(id)arg0 ;
-(id)getContactForHandle:(id)arg0 keysToFetch:(id)arg1 ;
-(id)shortDisplayNameForContact:(id)arg0 andHandle:(id)arg1 ;


@end


#endif