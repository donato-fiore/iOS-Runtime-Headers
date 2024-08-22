// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSEARCHTAPTORADARSECTIONPROVIDER_H
#define PXSEARCHTAPTORADARSECTIONPROVIDER_H

@class NSString, NSArray;
@protocol PXSearchDataSourceSectionProvider, PXSearchDataSourceSectionProviderChangeObserver, PXSearchTapToRadarSectionProviderDelegate;

#import <Foundation/Foundation.h>


@interface PXSearchTapToRadarSectionProvider : NSObject <PXSearchDataSourceSectionProvider>



@property (weak, nonatomic) NSObject<PXSearchDataSourceSectionProviderChangeObserver> *changeObserver; // ivar: changeObserver
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXSearchTapToRadarSectionProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *sectionIdentifiers;
@property (nonatomic) BOOL shouldDisplayRadarDescriptionLabel; // ivar: _shouldDisplayRadarDescriptionLabel
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type;


-(id)cellReuseIdentifierForItemIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)itemIdentifiersInSectionWithIdentifier:(id)arg0 ;
-(id)layoutForSectionIdentifier:(id)arg0 environment:(id)arg1 collectionViewLayoutMargins:(struct UIEdgeInsets )arg2 ;
-(id)supplementaryViewReuseIdentifierForKind:(id)arg0 indexPath:(id)arg1 ;
-(void)configureCell:(id)arg0 forItemIdentifier:(id)arg1 ;
-(void)configureSupplementaryView:(id)arg0 kind:(id)arg1 indexPath:(id)arg2 ;
-(void)registerClassesForCellReuseIdentifiers:(id)arg0 ;
-(void)registerClassesForSupplementaryViewReuseIdentifiers:(id)arg0 ;


@end


#endif