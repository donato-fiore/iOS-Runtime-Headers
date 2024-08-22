// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNAUTOCOMPLETEENTITLEMENTVERIFIER_H
#define CNAUTOCOMPLETEENTITLEMENTVERIFIER_H


#import <Foundation/Foundation.h>


@interface CNAutocompleteEntitlementVerifier : NSObject



+(BOOL)currentProcessHasBooleanEntitlement:(id)arg0 ;
+(BOOL)currentProcessHasCalendarEntitlement;
+(BOOL)currentProcessHasContactsEntitlement;
+(BOOL)currentProcessHasDuetEntitlement;
+(BOOL)currentProcessHasNetworkClientEntitlement;
+(BOOL)currentProcessHasRecentsEntitlement;
+(BOOL)currentProcessHasSuggestionsEntitlement;


@end


#endif