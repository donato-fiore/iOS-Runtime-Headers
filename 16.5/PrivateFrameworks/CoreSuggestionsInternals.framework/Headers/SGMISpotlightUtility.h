// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMISPOTLIGHTUTILITY_H
#define SGMISPOTLIGHTUTILITY_H


#import <Foundation/Foundation.h>


@interface SGMISpotlightUtility : NSObject



+(BOOL)queryFromDaysAgo:(NSUInteger)arg0 throughDaysAgo:(NSUInteger)arg1 limit:(NSUInteger)arg2 withError:(*id)arg3 handler:(id)arg4 ;
+(BOOL)queryFromDaysAgo:(NSUInteger)arg0 throughDaysAgo:(NSUInteger)arg1 limit:(NSUInteger)arg2 withError:(*id)arg3 simulatedCSSIs:(id)arg4 handler:(id)arg5 ;
+(id)defaultCSSearchQueryContextFetchAttributes;
+(id)findDeletedEmailAddresses:(id)arg0 mdSearchableItemAttribute:(id)arg1 fromDaysAgo:(NSUInteger)arg2 error:(*id)arg3 ;
+(id)itemWithUniqueIdentifier:(id)arg0 error:(*id)arg1 ;
+(id)nicknameCSSearchQueryContextFetchAttributes;
+(id)queryEmailsFromDaysAgo:(NSUInteger)arg0 throughDaysAgo:(NSUInteger)arg1 fetchAttributes:(id)arg2 filterQuery:(id)arg3 queryString:(id)arg4 bundleIds:(id)arg5 spotlightTimeOut:(NSUInteger)arg6 withError:(*id)arg7 ;
+(void)querySentMailsForNicknameMatchingFromDaysAgo:(NSUInteger)arg0 throughDaysAgo:(NSUInteger)arg1 limit:(NSUInteger)arg2 handler:(id)arg3 ;


@end


#endif