// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSEARCHINDEXSTATUSSECTIONPROVIDER_H
#define PXSEARCHINDEXSTATUSSECTIONPROVIDER_H

@class NSString, NSArray;
@protocol PXSettingsKeyObserver, PXSearchDataSourceSectionProvider, PXSearchDataSourceSectionProviderChangeObserver;

#import <Foundation/Foundation.h>


@interface PXSearchIndexStatusSectionProvider : NSObject <PXSettingsKeyObserver, PXSearchDataSourceSectionProvider>



@property (weak, nonatomic) NSObject<PXSearchDataSourceSectionProviderChangeObserver> *changeObserver; // ivar: changeObserver
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *sectionIdentifiers;
@property (nonatomic) BOOL showsIndexingFooter; // ivar: _showsIndexingFooter
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type;


-(id)cellReuseIdentifierForItemIdentifier:(id)arg0 ;
-(id)init;
-(id)itemIdentifiersInSectionWithIdentifier:(id)arg0 ;
-(id)layoutForSectionIdentifier:(id)arg0 environment:(id)arg1 collectionViewLayoutMargins:(struct UIEdgeInsets )arg2 ;
-(id)supplementaryViewReuseIdentifierForKind:(id)arg0 indexPath:(id)arg1 ;
-(void)configureCell:(id)arg0 forItemIdentifier:(id)arg1 ;
-(void)configureSupplementaryView:(id)arg0 kind:(id)arg1 indexPath:(id)arg2 ;
-(void)dealloc;
-(void)registerClassesForCellReuseIdentifiers:(id)arg0 ;
-(void)registerClassesForSupplementaryViewReuseIdentifiers:(id)arg0 ;
-(void)searchIndexStatusDidChange:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif