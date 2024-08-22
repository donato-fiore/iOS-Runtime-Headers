// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMCORESPOTLIGHTUTILITIES_H
#define IMCORESPOTLIGHTUTILITIES_H


#import <Foundation/Foundation.h>


@interface IMCoreSpotlightUtilities : NSObject



+(BOOL)bypassIndexVersionCheck;
+(BOOL)needsDeferredIndexing;
+(BOOL)needsDonation;
+(BOOL)needsIndexing;
+(BOOL)needsInitialDonation;
+(BOOL)verboseLoggingEnabled;
+(NSUInteger)currentIndexVersion;
+(NSUInteger)expectedIndexVersion;
+(NSUInteger)lastDonatedRowID;
+(NSUInteger)lastIndexedRowID;
+(NSUInteger)messageIndexBatchSize:(BOOL)arg0 ;
+(id)currentIndexProductVersion;
+(id)descriptionForReindexReason:(NSUInteger)arg0 ;
+(id)expectedIndexProductVersion;
+(void)setNeedsDeferredIndexing;
+(void)setNeedsInitialDonation:(BOOL)arg0 ;


@end


#endif