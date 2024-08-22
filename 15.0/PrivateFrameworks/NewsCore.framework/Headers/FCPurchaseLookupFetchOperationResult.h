// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCPURCHASELOOKUPFETCHOPERATIONRESULT_H
#define FCPURCHASELOOKUPFETCHOPERATIONRESULT_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface FCPurchaseLookupFetchOperationResult : NSObject

@property (copy, nonatomic) NSDictionary *bundleChannelIDsByPurchaseID; // ivar: _bundleChannelIDsByPurchaseID
@property (copy, nonatomic) NSString *bundleChannelIDsVersion; // ivar: _bundleChannelIDsVersion
@property (copy, nonatomic) NSDictionary *channelIDsByPurchaseID; // ivar: _channelIDsByPurchaseID


-(id)initWithChannelIDsByPurchaseID:(id)arg0 bundleChannelIDsByPurchaseID:(id)arg1 bundleChannelIDsVersion:(id)arg2 ;


@end


#endif