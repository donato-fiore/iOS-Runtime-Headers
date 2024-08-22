// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KNSLIDENODE_H
#define KNSLIDENODE_H

@class TSPObject, TSPLazyReference, NSString, NSArray, NSMutableSet, NSSet, NSDictionary, NSUUID;
@protocol TSKDocumentObject, TSKModel, TSCEResolverContainer;


#import "KNSlideNode.h"
#import "KNAbstractSlide.h"
#import "KNSlideTree.h"

@interface KNSlideNode : TSPObject <TSKDocumentObject, TSKModel, TSCEResolverContainer>

 {
    TSPLazyReference *_slideReference;
    BOOL _thumbnailsAreDirty;
    BOOL _hidden;
    BOOL _hasTransition;
    BOOL _hasNote;
    BOOL _slideNumberVisible;
    NSUInteger _depth;
    NSUInteger _slideSpecificHyperlinksCount;
    NSString *_classicUniqueID;
    NSString *_previousIdentifier;
    unsigned int _tableNameCounter;
    NSArray *_children;
    BOOL _hasExplicitBuilds;
    BOOL _hasExplicitBuildsIsUpToDate;
    NSUInteger _buildEventCount;
    BOOL _buildEventCountIsUpToDate;
    NSMutableSet *_remappedTableNames;
}


@property (readonly, nonatomic) NSInteger bodyParagraphCount;
@property (readonly, nonatomic) NSUInteger buildEventCount;
@property (readonly, nonatomic) NSArray *children;
@property (retain, nonatomic) NSString *classicUniqueID;
@property (nonatomic, getter=isCollapsed) BOOL collapsed; // ivar: _collapsed
@property (nonatomic, getter=isCollapsedInOutlineView) BOOL collapsedInOutlineView; // ivar: _collapsedInOutlineView
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSUInteger depth;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSSet *digestsForDatasThatNeedDownloadForThumbnail; // ivar: _digestsForDatasThatNeedDownloadForThumbnail
@property (readonly, nonatomic) BOOL hasBackgroundAlpha; // ivar: _hasBackgroundAlpha
@property (nonatomic) BOOL hasBodyInOutlineView; // ivar: _hasBodyInOutlineView
@property (readonly, nonatomic) BOOL hasBuildEvents;
@property (readonly, nonatomic) BOOL hasChildren;
@property (readonly, nonatomic) BOOL hasExplicitBuilds;
@property (nonatomic) BOOL hasNote;
@property (nonatomic) BOOL hasTransition;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) BOOL isSlideNumberVisible;
@property (readonly, nonatomic) NSSet *liveVideoSourceUUIDs; // ivar: _liveVideoSourceUUIDs
@property (readonly, nonatomic) KNSlideNode *next;
@property (readonly, nonatomic) KNSlideNode *nextSkippingCollapsed;
@property (readonly, nonatomic) KNSlideNode *nextSkippingHidden;
@property (readonly, nonatomic) KNSlideNode *previous;
@property (copy, nonatomic) NSString *previousIdentifier;
@property (readonly, nonatomic) KNSlideNode *previousSkippingCollapsed;
@property (readonly, nonatomic) KNSlideNode *previousSkippingHidden;
@property (readonly, nonatomic) NSUInteger safeBuildEventCount;
@property (retain, nonatomic) KNAbstractSlide *slide;
@property (readonly, nonatomic) KNAbstractSlide *slideIfLoaded;
@property (readonly, nonatomic) NSDictionary *slideSpecificHyperlinkMap; // ivar: _slideSpecificHyperlinkMap
@property (weak, nonatomic) KNSlideTree *slideTree; // ivar: _slideTree
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *templateSlideUUID; // ivar: _templateSlideUUID
@property (readonly, nonatomic) NSDictionary *thumbnails; // ivar: _thumbnails
@property (nonatomic) BOOL thumbnailsAreDirty;
@property (readonly, nonatomic) NSString *uniqueIdentifier;


+(BOOL)needsObjectUUID;
+(id)UUIDStringSetForSlideNodes:(id)arg0 ;
+(id)parentSlideNodeForInfo:(id)arg0 ;
+(id)slideNodeForSelectionPath:(id)arg0 ;
+(id)slideNodeUUIDForObsoleteUniqueIDString:(id)arg0 inSlideNodes:(id)arg1 ;
-(BOOL)hasSlideSpecificHyperlinkToNode:(id)arg0 ;
-(BOOL)hasSlideSpecificHyperlinks;
-(BOOL)resolverNameIsUsed:(id)arg0 ;
-(BOOL)safeHasBuildEvents;
-(NSUInteger)numberOfLinksToSlideNodeInStorage:(id)arg0 forSlideNodeUUIDString:(id)arg1 ;
-(id)childEnumerator;
-(id)descendants;
-(id)descendantsOmittingSkippedSlideNodes:(BOOL)arg0 omittingCollapsedSlideNodes:(BOOL)arg1 ;
-(id)initWithContext:(id)arg0 ;
-(id)objectUUIDPath;
-(id)p_getSlideSpecificMappingForStorage:(id)arg0 forSlideNode:(id)arg1 ;
-(id)p_mappingFromString:(id)arg0 ;
-(id)p_slideNodeWithUUIDString:(id)arg0 inSlideNodes:(id)arg1 ;
-(id)paragraphIndexesOfTopLevelBullets;
-(id)remappedTableNames;
-(id)resolverMatchingName:(id)arg0 ;
-(id)resolversMatchingPrefix:(id)arg0 ;
-(id)slideAndReturnError:(*id)arg0 ;
-(unsigned int)saveNextUntitledResolverIndex;
-(void)addHyperlinkFieldMap:(id)arg0 forStorage:(id)arg1 ;
-(void)addHyperlinkForInfo:(id)arg0 toSlideNode:(id)arg1 ;
-(void)addHyperlinkForStorage:(id)arg0 toSlideNode:(id)arg1 ;
-(void)addOldModelDescendantsToSlideTree:(id)arg0 ;
-(void)addRemappedTableName:(id)arg0 ;
-(void)addThumbnail:(id)arg0 atSize:(struct CGSize )arg1 ;
-(void)cleanOutInvalidSlideSpecificInfoEntries;
-(void)clearRemappedTableNames;
-(void)clearSlideSpecificLinkMap;
-(void)didLoadSlide:(id)arg0 ;
-(void)invalidateBuildEventCountCaches;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_addHyperlinkForObjectReferencedByMapping:(id)arg0 toSlideNode:(id)arg1 ;
-(void)p_addOldModelDescendantsToSlideTree:(id)arg0 atDepth:(NSUInteger)arg1 ;
-(void)p_commonInit;
-(void)p_removeHyperlinkForObjectReferencedByMapping:(id)arg0 toSlideNode:(id)arg1 ;
-(void)p_updateHasExplicitBuilds;
-(void)purgeU15ModelIfNeeded;
-(void)removeAllThumbnails;
-(void)removeHyperlinkFieldMap:(id)arg0 forStorage:(id)arg1 ;
-(void)removeHyperlinkForInfo:(id)arg0 toSlideNode:(id)arg1 ;
-(void)removeHyperlinkForStorage:(id)arg0 toSlideNode:(id)arg1 ;
-(void)removeInvalidSlideSpecificHyperlinksForStorage:(id)arg0 withSlideNodeUUIDStrings:(id)arg1 ;
-(void)removeInvalidSlideSpecificHyperlinksWithSlideNodeUUIDStrings:(id)arg0 ;
-(void)removeObsoleteFieldsFor20Upgrade;
-(void)removeSlideSpecificMappingsFromDrawablesInGroup:(id)arg0 ;
-(void)removeThumbnailAtSize:(struct CGSize )arg0 ;
-(void)rollbackNextUntitledResolverIndex:(unsigned int)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)uniquifyTableNamesForUpgradeOrImport;
-(void)updateHasBackgroundAlpha;
-(void)updateLiveVideoSourceUUIDs;
-(void)updateTemplateSlideUUID;
-(void)upgradeSlideSpecificHyperlinksForSlideNodes:(id)arg0 ;
-(void)upgradeSlideSpecificStorageHyperlinksForStorage:(id)arg0 withSlideNodes:(id)arg1 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif