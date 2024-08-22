// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXHOMESCREENPAGE_H
#define ATXHOMESCREENPAGE_H

@class NSDictionary, NSSet, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXHomeScreenPage : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDictionary *appLocations; // ivar: _appLocations
@property (copy, nonatomic) NSSet *associatedModeUUIDs; // ivar: _associatedModeUUIDs
@property (nonatomic) NSUInteger pageIndex; // ivar: _pageIndex
@property (copy, nonatomic) NSArray *panels; // ivar: _panels
@property (copy, nonatomic) NSArray *stacks; // ivar: _stacks
@property (copy, nonatomic) NSDictionary *webClipLocations; // ivar: _webClipLocations


+(BOOL)supportsSecureCoding;
-(BOOL)_containsWidgetWithExtensionBundleId:(id)arg0 ;
-(BOOL)containsAppPredictionPanel;
-(BOOL)containsSuggestionsWidget;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)dictionaryRepresentationIncludingAllApps:(BOOL)arg0 ;
-(id)initFromDictionaryRepresentation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)nonFolderAppsOnPage;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif