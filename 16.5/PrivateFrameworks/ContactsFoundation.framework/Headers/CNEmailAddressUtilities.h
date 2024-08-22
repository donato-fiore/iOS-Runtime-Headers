// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNEMAILADDRESSUTILITIES_H
#define CNEMAILADDRESSUTILITIES_H


#import <Foundation/Foundation.h>


@interface CNEmailAddressUtilities : NSObject



+(BOOL)isStringEmailAddress:(id)arg0 ;
+(id)aliasedDomains;
+(id)expandAliasedDomainsInAddress:(id)arg0 ;
+(id)makeEmailRegex;
+(id)safeUserVisibleEmailAddress:(id)arg0 ;


@end


#endif