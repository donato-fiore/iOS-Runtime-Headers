// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FKUTILITY_H
#define FKUTILITY_H


#import <Foundation/Foundation.h>


@interface FKUtility : NSObject



+(BOOL)isRomanString:(id)arg0 ;
+(BOOL)personHasLinkages:(*void)arg0 ;
+(BOOL)shouldAllowAddingFriendWithRecordID:(int)arg0 withFriendListManager:(id)arg1 addressBook:(*void)arg2 personValueCache:(id)arg3 ;
+(id)_nameFormatter;
+(id)compressPhoneNumberString:(id)arg0 ;
+(id)hashFromData:(id)arg0 ;
+(id)initialForString:(id)arg0 ;
+(id)initialsForPerson:(*void)arg0 ;


@end


#endif