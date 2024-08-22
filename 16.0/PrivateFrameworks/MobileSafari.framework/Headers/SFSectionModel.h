// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSECTIONMODEL_H
#define SFSECTIONMODEL_H

@class NSArray, UIAction, NSString, UIMenu;

#import <Foundation/Foundation.h>

#import "SFBannerModel.h"

@interface SFSectionModel : NSObject {
    id *_configurationProvider;
}


@property (readonly, copy, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, nonatomic) SFBannerModel *banner; // ivar: _banner
@property (readonly, nonatomic) SFBannerModel *contentBanner; // ivar: _contentBanner
@property (copy, nonatomic) id *contextMenuCommitHandler; // ivar: _contextMenuCommitHandler
@property (copy, nonatomic) id *contextMenuDismissHandler; // ivar: _contextMenuDismissHandler
@property (copy, nonatomic) id *contextMenuProvider; // ivar: _contextMenuProvider
@property (copy, nonatomic) id *dragItemProvider; // ivar: _dragItemProvider
@property (copy, nonatomic) id *dropHandler; // ivar: _dropHandler
@property (copy, nonatomic) id *dropOperationProvider; // ivar: _dropOperationProvider
@property (readonly, nonatomic) NSUInteger effectiveItemIdentifiersCount;
@property (nonatomic) BOOL expandsModally; // ivar: _expandsModally
@property (readonly, nonatomic) id *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSArray *itemIdentifiers; // ivar: _itemIdentifiers
@property (readonly, nonatomic) NSInteger itemType; // ivar: _itemType
@property (nonatomic) NSInteger numberOfRowsVisibleWhenCollapsed; // ivar: _numberOfRowsVisibleWhenCollapsed
@property (nonatomic) NSInteger numberOfRowsVisibleWhenCollapsedInCompactWidth; // ivar: _numberOfRowsVisibleWhenCollapsedInCompactWidth
@property (readonly, nonatomic) id *richLinkConfigurationProvider;
@property (nonatomic) BOOL showsTopSeparator; // ivar: _showsTopSeparator
@property (readonly, nonatomic) id *siteCardConfigurationProvider;
@property (readonly, nonatomic) id *siteIconConfigurationProvider;
@property (readonly, nonatomic) id *siteRowConfigurationProvider;
@property (readonly, copy, nonatomic) UIAction *supplementaryAction; // ivar: _supplementaryAction
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) UIMenu *titleMenu; // ivar: _titleMenu
@property (nonatomic) BOOL usesLargeTitle; // ivar: _usesLargeTitle


+(id)actionSectionWithIdentifier:(id)arg0 actions:(id)arg1 ;
+(id)bannerSectionWithIdentifier:(id)arg0 banner:(id)arg1 ;
+(id)bannerSectionWithIdentifier:(id)arg0 title:(id)arg1 banner:(id)arg2 ;
+(id)footerSectionWithIdentifier:(id)arg0 action:(id)arg1 ;
+(id)headingSectionWithIdentifier:(id)arg0 title:(id)arg1 ;
+(id)richLinkSectionWithIdentifier:(id)arg0 actions:(id)arg1 banner:(id)arg2 identifiers:(id)arg3 configurationProvider:(id)arg4 ;
+(id)richLinkSectionWithIdentifier:(id)arg0 title:(id)arg1 actions:(id)arg2 banner:(id)arg3 identifiers:(id)arg4 configurationProvider:(id)arg5 ;
+(id)separatorSectionWithIdentifier:(id)arg0 ;
+(id)siteCardSectionWithIdentifier:(id)arg0 actions:(id)arg1 banner:(id)arg2 identifiers:(id)arg3 configurationProvider:(id)arg4 ;
+(id)siteCardSectionWithIdentifier:(id)arg0 title:(id)arg1 actions:(id)arg2 banner:(id)arg3 identifiers:(id)arg4 configurationProvider:(id)arg5 ;
+(id)siteIconSectionWithIdentifier:(id)arg0 actions:(id)arg1 banner:(id)arg2 supplementaryAction:(id)arg3 identifiers:(id)arg4 configurationProvider:(id)arg5 ;
+(id)siteIconSectionWithIdentifier:(id)arg0 title:(id)arg1 actions:(id)arg2 banner:(id)arg3 supplementaryAction:(id)arg4 identifiers:(id)arg5 configurationProvider:(id)arg6 ;
+(id)siteRowSectionWithIdentifier:(id)arg0 actions:(id)arg1 banner:(id)arg2 identifiers:(id)arg3 configurationProvider:(id)arg4 ;
+(id)siteRowSectionWithIdentifier:(id)arg0 title:(id)arg1 actions:(id)arg2 banner:(id)arg3 identifiers:(id)arg4 configurationProvider:(id)arg5 ;
+(id)toggleExpandedAction;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)effectiveItemIdentifiersWithMaximumCount:(NSUInteger)arg0 ;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 actions:(id)arg2 banner:(id)arg3 itemType:(NSInteger)arg4 itemIdentifiers:(id)arg5 configurationProvider:(id)arg6 ;


@end


#endif