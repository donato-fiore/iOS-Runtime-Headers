// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNDONATEDCONTACTSANITIZER_H
#define CNDONATEDCONTACTSANITIZER_H


#import <Foundation/Foundation.h>


@interface CNDonatedContactSanitizer : NSObject



+(id)mutableCopyOfDonatedContact:(id)arg0 withCustomIdentifier:(id)arg1 ;
+(id)sanitizeDonatedContact:(id)arg0 matchingPredicate:(id)arg1 ;
+(id)storeInfoByMergingStoreInfos:(id)arg0 ;
+(id)storeInfoFromPredicate:(id)arg0 ;
+(void)markContactAndMultiValuesAsDonated:(id)arg0 usingStoreInfo:(id)arg1 andStoreIdentifier:(id)arg2 ;


@end


#endif