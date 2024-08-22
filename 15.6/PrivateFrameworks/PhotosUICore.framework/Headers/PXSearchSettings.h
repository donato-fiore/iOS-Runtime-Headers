// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSEARCHSETTINGS_H
#define PXSEARCHSETTINGS_H



#import "PXSettings.h"

@interface PXSearchSettings : PXSettings

@property (nonatomic) BOOL alwaysTrySiriSearch; // ivar: _alwaysTrySiriSearch
@property (nonatomic) BOOL enableImplicitTokenization; // ivar: _enableImplicitTokenization
@property (nonatomic) BOOL exactMatchIgnoreUntokenizedCharacters; // ivar: _exactMatchIgnoreUntokenizedCharacters
@property (nonatomic) BOOL forceIndexingFooter; // ivar: _forceIndexingFooter
@property (nonatomic) BOOL implicitTokenizationLastTokenUsesPrefixMatch; // ivar: _implicitTokenizationLastTokenUsesPrefixMatch
@property (nonatomic) BOOL implicitTokenizationUsePrefixMatch; // ivar: _implicitTokenizationUsePrefixMatch
@property (nonatomic) BOOL lastImplicitTokenAllowsWordEmbeddings; // ivar: _lastImplicitTokenAllowsWordEmbeddings
@property (nonatomic) NSUInteger maxNumberOfResultColumns; // ivar: _maxNumberOfResultColumns
@property (nonatomic) NSUInteger maxNumberOfSuggestionsToShow; // ivar: _maxNumberOfSuggestionsToShow
@property (nonatomic) NSUInteger maxNumberOfTopAssetColumns; // ivar: _maxNumberOfTopAssetColumns
@property (nonatomic) NSUInteger maxNumberOfTopAssetRows; // ivar: _maxNumberOfTopAssetRows
@property (nonatomic) BOOL preventUnnecessaryImplicitTokenization; // ivar: _preventUnnecessaryImplicitTokenization
@property (nonatomic) NSUInteger standardNumberOfTopAssetRows; // ivar: _standardNumberOfTopAssetRows


+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif