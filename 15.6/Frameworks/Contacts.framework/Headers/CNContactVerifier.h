// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTVERIFIER_H
#define CNCONTACTVERIFIER_H


#import <Foundation/Foundation.h>


@interface CNContactVerifier : NSObject



+(BOOL)arePropertiesOfContact:(id)arg0 authorizedForSavingWithContext:(id)arg1 error:(*id)arg2 ;
+(BOOL)isValidContact:(id)arg0 error:(*id)arg1 ;


@end


#endif