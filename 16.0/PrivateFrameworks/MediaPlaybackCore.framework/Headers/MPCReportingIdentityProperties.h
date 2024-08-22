// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCREPORTINGIDENTITYPROPERTIES_H
#define MPCREPORTINGIDENTITYPROPERTIES_H

@class ICPlayActivityEnqueuerProperties, NSString;

#import <Foundation/Foundation.h>


@interface MPCReportingIdentityProperties : NSObject

@property (copy, nonatomic) ICPlayActivityEnqueuerProperties *enqueuerProperties; // ivar: _enqueuerProperties
@property (nonatomic) BOOL hasSubscriptionPlaybackCapability; // ivar: _hasSubscriptionPlaybackCapability
@property (copy, nonatomic) NSString *householdID; // ivar: _householdID
@property (nonatomic) NSUInteger storeAccountID; // ivar: _storeAccountID
@property (copy, nonatomic) NSString *storeFrontID; // ivar: _storeFrontID




@end


#endif