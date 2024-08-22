// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSMEDIATASKURLBUILDER_H
#define AMSMEDIATASKURLBUILDER_H

@class NSArray, NSDictionary, NSString;
@protocol AMSBagProtocol;

#import <Foundation/Foundation.h>

#import "AMSMediaTaskTypeConfig.h"

@interface AMSMediaTaskURLBuilder : NSObject

@property (retain, nonatomic) NSArray *additionalPlatforms; // ivar: _additionalPlatforms
@property (retain, nonatomic) NSDictionary *additionalQueryParams; // ivar: _additionalQueryParams
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) NSArray *bundleIdentifiers; // ivar: _bundleIdentifiers
@property (nonatomic) BOOL charts; // ivar: _charts
@property (readonly, nonatomic) NSString *clientVersion; // ivar: _clientVersion
@property (readonly, nonatomic) AMSMediaTaskTypeConfig *config; // ivar: _config
@property (retain, nonatomic) NSDictionary *filters; // ivar: _filters
@property (retain, nonatomic) NSArray *includedResultKeys; // ivar: _includedResultKeys
@property (retain, nonatomic) NSArray *itemIdentifiers; // ivar: _itemIdentifiers
@property (retain, nonatomic) NSString *logKey; // ivar: _logKey
@property (retain, nonatomic) NSString *searchTerm; // ivar: _searchTerm


-(id)_basePath;
-(id)_devicePlatform;
-(id)_hostPromise;
-(id)_languagePromise;
-(id)_pathPromise;
-(id)_queryItemsWithLangauge:(id)arg0 ;
-(id)_verifyConfiguration;
-(id)build;
-(id)initWithConfig:(id)arg0 clientVersion:(id)arg1 bag:(id)arg2 ;
-(void)_addBundleIdentifiers:(id)arg0 ;
-(void)_addCharts:(id)arg0 ;
-(void)_addItemIdentifiers:(id)arg0 ;
-(void)_addSearchTerm:(id)arg0 ;


@end


#endif