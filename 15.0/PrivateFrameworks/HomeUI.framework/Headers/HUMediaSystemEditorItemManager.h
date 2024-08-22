// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUMEDIASYSTEMEDITORITEMMANAGER_H
#define HUMEDIASYSTEMEDITORITEMMANAGER_H

@class HFItemManager, HFItem, HFMediaSystemBuilder, HFStaticItem;



@interface HUMediaSystemEditorItemManager : HFItemManager

@property (retain, nonatomic) HFItem *instructionsItem; // ivar: _instructionsItem
@property (readonly, nonatomic) NSInteger instructionsSectionIndex;
@property (readonly, nonatomic) HFMediaSystemBuilder *mediaSystemBuilder; // ivar: _mediaSystemBuilder
@property (readonly, nonatomic) NSUInteger mode; // ivar: _mode
@property (readonly, nonatomic) HFStaticItem *nameAndIconItem; // ivar: _nameAndIconItem
@property (retain, nonatomic) HFStaticItem *serviceGridItem; // ivar: _serviceGridItem
@property (readonly, nonatomic) NSInteger serviceGridSectionIndex;


-(NSUInteger)_numberOfSections;
-(id)_buildItemProvidersForHome:(id)arg0 ;
-(id)_identifierForSection:(NSUInteger)arg0 ;
-(id)_sectionIdentifierForItem:(id)arg0 ;
-(id)_titleForSectionWithIdentifier:(id)arg0 ;
-(id)currentSectionIdentifiers;
-(id)currentSectionIdentifiersSnapshot;
-(id)initWithDelegate:(id)arg0 sourceItem:(id)arg1 ;
-(id)initWithMediaSystemBuilder:(id)arg0 mode:(NSUInteger)arg1 delegate:(id)arg2 ;


@end


#endif