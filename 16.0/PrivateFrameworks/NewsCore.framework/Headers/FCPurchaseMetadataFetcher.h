// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCPURCHASEMETADATAFETCHER_H
#define FCPURCHASEMETADATAFETCHER_H

@class NSString, NSNumber;
@protocol FCPurchaseMetadataFetcher, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FCPurchaseLookupResult.h"

@interface FCPurchaseMetadataFetcher : NSObject <FCPurchaseMetadataFetcher>

 {
    NSString *_bundleID;
    NSNumber *_externalVersionID;
    FCPurchaseLookupResult *_lookupResult;
    NSObject<OS_dispatch_queue> *_accessQueue;
}




-(id)fetchPurchaseMetadataForPurchaseID:(id)arg0 restorePurchase:(BOOL)arg1 ;
-(id)init;


@end


#endif