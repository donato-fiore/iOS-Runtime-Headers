// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABSPUBLICABCNCOMPATIBILITY_H
#define ABSPUBLICABCNCOMPATIBILITY_H


#import <Foundation/Foundation.h>


@interface ABSPublicABCNCompatibility : NSObject



+(*void)publicABPersonFromContact:(id)arg0 contactStore:(id)arg1 publicAddressBook:(**void)arg2 ;
+(BOOL)overwritePublicABPerson:(*void)arg0 withContact:(id)arg1 ;
+(BOOL)updateNewPublicABPerson:(*void)arg0 withSavedContact:(id)arg1 inAddressBook:(*void)arg2 ;
+(id)contactFromPublicABPerson:(*void)arg0 keysToFetch:(id)arg1 ;
+(id)contactFromPublicABPerson:(*void)arg0 keysToFetch:(id)arg1 mutable:(BOOL)arg2 ;
+(id)contactPropertyKeyFromPublicABPropertyID:(int)arg0 ;
+(id)contactStoreForPublicAddressBook:(*void)arg0 ;
+(id)createAddressBookForConversion;
+(id)labeledValueFromPublicMultiValueIdentifier:(int)arg0 contact:(id)arg1 key:(id)arg2 contactStore:(id)arg3 ;
+(int)publicABPropertyIDFromContactPropertyKey:(id)arg0 ;
+(int)publicMultiValueIdentifierFromLabeledValue:(id)arg0 contactStore:(id)arg1 ;


@end


#endif