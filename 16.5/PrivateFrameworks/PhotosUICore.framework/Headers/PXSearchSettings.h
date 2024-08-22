// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSEARCHSETTINGS_H
#define PXSEARCHSETTINGS_H

@class NSString;


#import "PXSettings.h"

@interface PXSearchSettings : PXSettings

@property (nonatomic) BOOL alwaysTrySiriSearch; // ivar: _alwaysTrySiriSearch
@property (nonatomic) BOOL disableTopAssetCuration; // ivar: _disableTopAssetCuration
@property (nonatomic) BOOL enableChimaeraPipeline; // ivar: _enableChimaeraPipeline
@property (nonatomic) BOOL enableTopAssetInMemorySort; // ivar: _enableTopAssetInMemorySort
@property (nonatomic) BOOL forceIndexingFooter; // ivar: _forceIndexingFooter
@property (nonatomic) NSUInteger maxNumberOfResultColumns; // ivar: _maxNumberOfResultColumns
@property (nonatomic) NSUInteger maxNumberOfSuggestionsToShow; // ivar: _maxNumberOfSuggestionsToShow
@property (nonatomic) NSUInteger maxNumberOfTopAssetColumns; // ivar: _maxNumberOfTopAssetColumns
@property (nonatomic) NSUInteger maxNumberOfTopAssetRows; // ivar: _maxNumberOfTopAssetRows
@property (copy, nonatomic) NSString *overrideMatchedQueryText; // ivar: _overrideMatchedQueryText
@property (nonatomic) NSUInteger standardNumberOfTopAssetRows; // ivar: _standardNumberOfTopAssetRows


+(BOOL)_isChimaeraFFEnabled;
+(BOOL)isChimaeraEnabled;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif