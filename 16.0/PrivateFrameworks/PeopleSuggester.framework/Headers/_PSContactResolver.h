// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PSCONTACTRESOLVER_H
#define _PSCONTACTRESOLVER_H

@class CNContactStore, NSArray;

#import <Foundation/Foundation.h>


@interface _PSContactResolver : NSObject

@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, nonatomic) NSArray *keysToFetch; // ivar: _keysToFetch


+(id)handlesForContactFavorites;
+(id)normalizedHandlesDictionaryFromHandles:(id)arg0 ;
-(id)allEmailAndPhoneNumberHandlesForContact:(id)arg0 ;
-(id)contactWithIdentifier:(id)arg0 ;
-(id)initWithContactStore:(id)arg0 keysToFetch:(id)arg1 ;
-(id)resolveContact:(id)arg0 ;
-(id)resolveContactFromINPerson:(id)arg0 ;
-(id)resolveContactIdentifier:(id)arg0 ;
-(id)resolveContactIfPossibleFromContactIdentifierString:(id)arg0 ;
-(id)resolveContactIfPossibleFromContactIdentifierString:(id)arg0 pickFirstOfMultiple:(BOOL)arg1 ;


@end


#endif