// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUIKATTENDEEUTILS_H
#define CUIKATTENDEEUTILS_H


#import <Foundation/Foundation.h>


@interface CUIKAttendeeUtils : NSObject



+(id)_contactForIdentity:(id)arg0 keys:(id)arg1 ;
+(id)_displayStringForIdentityWithDecomposedName:(id)arg0 useAddressAsFallback:(BOOL)arg1 contactIdentifier:(*id)arg2 outFirstName:(*id)arg3 outLastName:(*id)arg4 outDepartment:(*id)arg5 useShortName:(BOOL)arg6 ;
+(id)_filteredAttendeeName:(id)arg0 parenthesizedPart:(*id)arg1 ;
+(id)contactForIdentity:(id)arg0 keys:(id)arg1 provider:(id)arg2 ;
+(id)displayShortStringForIdentityWithDecomposedName:(id)arg0 useAddressAsFallback:(BOOL)arg1 contactIdentifier:(*id)arg2 outFirstName:(*id)arg3 outLastName:(*id)arg4 outDepartment:(*id)arg5 ;
+(id)displayStringForIdentityWithDecomposedName:(id)arg0 useAddressAsFallback:(BOOL)arg1 contactIdentifier:(*id)arg2 outFirstName:(*id)arg3 outLastName:(*id)arg4 outDepartment:(*id)arg5 ;
+(id)sortEKParticipantsIgnoringNonHumans:(id)arg0 event:(id)arg1 ;
+(id)sortEKParticipantsIgnoringNonHumans:(id)arg0 event:(id)arg1 includeOrganizer:(BOOL)arg2 ;
+(id)sortedEKParticipantsForSortingIgnoringNonHumans:(id)arg0 event:(id)arg1 ;
+(id)sortedEKParticipantsForSortingIgnoringNonHumans:(id)arg0 event:(id)arg1 includeOrganizer:(BOOL)arg2 ;


@end


#endif