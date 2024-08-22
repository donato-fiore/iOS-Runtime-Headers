// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSACAPTIONINFO_H
#define TSACAPTIONINFO_H

@class TSWPShapeInfo;
@protocol TSDTitlePlacementProviding;


#import "TSACaptionPlacement.h"

@interface TSACaptionInfo : TSWPShapeInfo <TSDTitlePlacementProviding>



@property (nonatomic) NSInteger childInfoKind; // ivar: _childInfoKind
@property (readonly, nonatomic) BOOL isHidden;
@property (retain, nonatomic) TSACaptionPlacement *placement; // ivar: _placement
@property (readonly, nonatomic) NSInteger titleAnchorLocation;


+(BOOL)isCaption;
+(BOOL)wantsTitleAndCaptionUUIDs;
-(BOOL)allowedToBeDragAndDropped;
-(BOOL)allowsCaption;
-(BOOL)allowsTitle;
-(BOOL)canAnchor;
-(BOOL)canBeAnnotatedWithPencil;
-(BOOL)canChangeWrapType;
-(BOOL)displaysInstructionalText;
-(BOOL)isAllowedInFreehandDrawings;
-(BOOL)isAllowedInGroups;
-(BOOL)isAllowedToAddCaptionToChildInfo:(id)arg0 ;
-(BOOL)isLockable;
-(BOOL)isLocked;
-(BOOL)preventsChangeTracking;
-(BOOL)shouldShowOnCanvas:(id)arg0 ;
-(BOOL)storageChangesInvalidateWrap;
-(BOOL)supportsAttachedComments;
-(BOOL)supportsDropCapsInChildStorages;
-(BOOL)supportsHyperlinks;
-(BOOL)supportsMultipleColumns;
-(BOOL)supportsVerticalTextLayoutInChildStorages;
-(BOOL)textStorageAllowsCommentsDisregardingParent;
-(Class)layoutClass;
-(Class)repClass;
-(NSInteger)getChildInfoKind;
-(NSInteger)nestedTextboxDepth;
-(NSInteger)p_anchorLocationForCaptionPlacement;
-(id)copyDowngradedToShapeWithContext:(id)arg0 ;
-(id)copyWithContext:(id)arg0 ;
-(id)exteriorTextWrap;
-(id)infoForAlignAndDistribute;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 ;
-(id)instructionalText;
-(id)objectForProperty:(int)arg0 ;
-(id)owningAttachment;
-(id)owningAttachmentNoRecurse;
-(id)p_captionPlacementForAnchorLocation:(NSInteger)arg0 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setLocked:(BOOL)arg0 ;
-(void)setOwningAttachment:(id)arg0 ;


@end


#endif