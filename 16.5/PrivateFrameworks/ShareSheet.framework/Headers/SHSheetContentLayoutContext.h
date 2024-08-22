// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHSHEETCONTENTLAYOUTCONTEXT_H
#define SHSHEETCONTENTLAYOUTCONTEXT_H

@class NSDiffableDataSourceSnapshot, NSString;
@protocol NSCollectionLayoutEnvironment;

#import <Foundation/Foundation.h>


@interface SHSheetContentLayoutContext : NSObject

@property (readonly, nonatomic) NSDiffableDataSourceSnapshot *dataSourceSnapshot; // ivar: _dataSourceSnapshot
@property (nonatomic) BOOL enableHeroActions; // ivar: _enableHeroActions
@property (nonatomic) BOOL enableTopContentSectionText; // ivar: _enableTopContentSectionText
@property (readonly, nonatomic) NSObject<NSCollectionLayoutEnvironment> *environment; // ivar: _environment
@property (readonly, nonatomic) NSString *sectionIdentifier; // ivar: _sectionIdentifier
@property (nonatomic) NSDirectionalEdgeInsets viewDirectionalLayoutMargins; // ivar: _viewDirectionalLayoutMargins


-(id)initWithSectionIdentifier:(id)arg0 dataSourceSnapshot:(id)arg1 environment:(id)arg2 ;


@end


#endif