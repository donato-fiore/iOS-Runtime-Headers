// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSSEARCHINAPPSECTIONBUILDER_H
#define SSSEARCHINAPPSECTIONBUILDER_H

@class NSSet, NSArray;


#import "SSSectionBuilder.h"

@interface SSSearchInAppSectionBuilder : SSSectionBuilder

@property (retain, nonatomic) NSSet *bundleIdentifiersForHiddenSections; // ivar: _bundleIdentifiersForHiddenSections
@property (retain, nonatomic) NSArray *searchInAppInfo; // ivar: _searchInAppInfo


+(id)supportedBundleId;
-(BOOL)shouldSkipSection;
-(id)buildSection;


@end


#endif