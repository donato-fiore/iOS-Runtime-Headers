// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSMEDIATASK_H
#define AMSMEDIATASK_H

@class ACAccount, NSArray, NSDictionary, NSString;
@protocol AMSBagConsumer, AMSBagProtocol;


#import "AMSTask.h"
#import "AMSProcessInfo.h"

@interface AMSMediaTask : AMSTask <AMSBagConsumer>



@property (nonatomic) BOOL URLKnownToBeTrusted; // ivar: _URLKnownToBeTrusted
@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSArray *additionalPlatforms; // ivar: _additionalPlatforms
@property (retain, nonatomic) NSDictionary *additionalQueryParams; // ivar: _additionalQueryParams
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) NSArray *bundleIdentifiers; // ivar: _bundleIdentifiers
@property (nonatomic) BOOL charts; // ivar: _charts
@property (readonly, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (readonly, nonatomic) NSString *clientVersion; // ivar: _clientVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *filters; // ivar: _filters
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *includedResultKeys; // ivar: _includedResultKeys
@property (retain, nonatomic) NSArray *itemIdentifiers; // ivar: _itemIdentifiers
@property (retain, nonatomic) NSString *logKey; // ivar: _logKey
@property (retain, nonatomic) NSString *searchTerm; // ivar: _searchTerm
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)createBagForSubProfile;
-(id)initWithType:(NSInteger)arg0 clientIdentifier:(id)arg1 clientVersion:(id)arg2 bag:(id)arg3 ;
-(id)perform;


@end


#endif