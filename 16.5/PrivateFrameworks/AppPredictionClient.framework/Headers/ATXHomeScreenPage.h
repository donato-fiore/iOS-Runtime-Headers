// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHOMESCREENPAGE_H
#define ATXHOMESCREENPAGE_H

@class NSDictionary, NSSet, NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXHomeScreenPage : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDictionary *appLocations; // ivar: _appLocations
@property (copy, nonatomic) NSSet *associatedModeUUIDs; // ivar: _associatedModeUUIDs
@property (copy, nonatomic) NSArray *candidateApps; // ivar: _candidateApps
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (readonly, nonatomic) NSArray *leafAppIcons;
@property (copy, nonatomic) NSArray *leafIcons; // ivar: _leafIcons
@property (nonatomic) NSUInteger maxPortraitColumns; // ivar: _maxPortraitColumns
@property (nonatomic) NSUInteger maxPortraitRows; // ivar: _maxPortraitRows
@property (readonly, nonatomic) NSUInteger numberOfLeafIconSpots;
@property (nonatomic) NSUInteger pageIndex; // ivar: _pageIndex
@property (copy, nonatomic) NSArray *panels; // ivar: _panels
@property (copy, nonatomic) NSArray *stacks; // ivar: _stacks
@property (nonatomic) NSInteger suggestedPageType; // ivar: _suggestedPageType
@property (copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (copy, nonatomic) NSDictionary *webClipLocations; // ivar: _webClipLocations


+(BOOL)supportsSecureCoding;
-(BOOL)_containsWidgetWithExtensionBundleId:(id)arg0 ;
-(BOOL)containsAppPredictionPanel;
-(BOOL)containsSuggestionsWidget;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)dictionaryRepresentationForIntrospection;
-(id)init;
-(id)initFromDictionaryRepresentation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)nonFolderAppsOnPage;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateApps:(id)arg0 ;
-(void)enumerateAppsConsideringFolders:(BOOL)arg0 block:(id)arg1 ;


@end


#endif