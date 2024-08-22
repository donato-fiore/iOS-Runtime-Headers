// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPTOCINFO_H
#define TSWPTOCINFO_H

@class NSString, NSArray, NSSet;
@protocol TSWPTextualEquivalentProvider;


#import "TSWPShapeInfo.h"
#import "TSWPTOCPartitioner.h"
#import "TSWPTOCSettings.h"

@interface TSWPTOCInfo : TSWPShapeInfo <TSWPTextualEquivalentProvider>

 {
    TSWPTOCPartitioner *_partitioner;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *pageNumberRanges; // ivar: _pageNumberRanges
@property (readonly, nonatomic) NSSet *paragraphStylesShownInTOC;
@property (nonatomic) BOOL shouldSyncTOCSettingsWithTOCNavigator; // ivar: _shouldSyncTOCSettingsWithTOCNavigator
@property (readonly) Class superclass;
@property (retain, nonatomic, setter=setTOCEntries:) NSArray *tocEntries; // ivar: _tocEntries
@property (retain, nonatomic, setter=setTOCSettings:) TSWPTOCSettings *tocSettings; // ivar: _tocSettings
@property (readonly, nonatomic) NSArray *visibleTOCEntries;


+(BOOL)canPartitionInline;
-(BOOL)allowsCaption;
-(BOOL)allowsTitle;
-(BOOL)isSelectable;
-(BOOL)p_startingTOCIsRTLForEntries:(id)arg0 ;
-(BOOL)supportsAttachedComments;
-(BOOL)supportsDropCapsInChildStorages;
-(BOOL)textIsVertical;
-(BOOL)wantsPositionFixedWhenCopying;
-(Class)editorClass;
-(Class)repClass;
-(id)containedStorageFormattedUsingParagraphStyle:(id)arg0 ;
-(id)containedStorageFormattedUsingParagraphStyles;
-(id)copyWithContext:(id)arg0 ;
-(id)partitioner;
-(id)referencedStyles;
-(id)textualEquivalent;
-(unsigned int)elementKind;
-(void)acceptVisitor:(id)arg0 ;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)loadTOCInfoMessage:(*void)arg0 unarchiver:(id)arg1 ;
-(void)regenerateStorageContent;
-(void)resetStorageStyles;
-(void)saveTOCInfoMessage:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif