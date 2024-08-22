// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPPAGETEMPLATE_H
#define TPPAGETEMPLATE_H

@class TSPObject, TSDFill, NSArray, NSString, TSDInfoGeometry, NSMutableArray, TSPObject<TSDOwningAttachment>, NSMutableDictionary;
@protocol TSKDocumentObject, TSDDrawableContainerInfo, TPSectionTemplateDrawableProvider, TSSPropertySource, TSKModelRootIndexProvider, TSKModel, TSWPStorageParentStatisticsFilter, TSDInfo;


#import "TPDrawablesZOrder.h"

@interface TPPageTemplate : TSPObject <TSKDocumentObject, TSDDrawableContainerInfo, TPSectionTemplateDrawableProvider, TSSPropertySource, TSKModelRootIndexProvider, TSKModel, TSWPStorageParentStatisticsFilter>



@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (retain, nonatomic) TSDFill *backgroundFill; // ivar: _backgroundFill
@property (readonly, copy, nonatomic) NSArray *childInfos;
@property (readonly, nonatomic) NSUInteger countOfSectionTemplateDrawables;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TPDrawablesZOrder *drawablesZOrder; // ivar: _drawablesZOrder
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL headersFootersMatchPreviousPage; // ivar: _headersFootersMatchPreviousPage
@property (nonatomic) BOOL hideHeadersFooters; // ivar: _hideHeadersFooters
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (readonly, nonatomic) BOOL isMaster;
@property (readonly, nonatomic) BOOL isTopmostContainerInfo;
@property (retain, nonatomic) NSMutableArray *masterDrawables; // ivar: _masterDrawables
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger numberOfDerivedPagesInDocument;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDInfo> *parentInfo;
@property (retain, nonatomic) NSMutableDictionary *placeholderDrawables; // ivar: _placeholderDrawables
@property (readonly, nonatomic) NSArray *sectionTemplateDrawables; // ivar: _sectionTemplateDrawables
@property (readonly) Class superclass;


+(BOOL)isUserDefinedTag:(id)arg0 ;
+(BOOL)needsObjectUUID;
-(BOOL)containsModelObject:(id)arg0 ;
-(BOOL)containsProperty:(int)arg0 ;
-(BOOL)isSelectable;
-(BOOL)isThemeContent;
-(BOOL)isUniqueTag:(id)arg0 ;
-(BOOL)statisticsShouldExcludeContainedStorage:(id)arg0 ;
-(CGFloat)CGFloatValueForProperty:(int)arg0 ;
-(CGFloat)doubleValueForProperty:(int)arg0 ;
-(CGFloat)highestScaleFactorForRenderingDrawableInfo:(id)arg0 ;
-(Class)layoutClass;
-(Class)repClass;
-(NSInteger)modelRootIndex;
-(NSUInteger)indexOfSectionTemplateDrawable:(id)arg0 ;
-(NSUInteger)templateIndex;
-(NSUInteger)templatePreviewPageIndex;
-(float)floatValueForProperty:(int)arg0 ;
-(id)boxedObjectForProperty:(int)arg0 ;
-(id)childEnumerator;
-(id)copyWithContext:(id)arg0 ;
-(id)infoForSelectionPath:(id)arg0 ;
-(id)initWithContext:(id)arg0 name:(id)arg1 placeholderDrawables:(id)arg2 placeholderTagsInZOrder:(id)arg3 sectionTemplateDrawables:(id)arg4 ;
-(id)objectForProperty:(int)arg0 ;
-(id)sectionTemplateDrawablesSortedByZOrder:(id)arg0 ;
-(id)tagForDrawable:(id)arg0 ;
-(id)topLevelParentInfoForInfo:(id)arg0 ;
-(id)userDefinedTagForDrawable:(id)arg0 ;
-(int)intValueForProperty:(int)arg0 ;
-(void)addPlaceholderDrawable:(id)arg0 afterDrawable:(id)arg1 ;
-(void)addSectionTemplateDrawable:(id)arg0 atIndex:(NSUInteger)arg1 insertContext:(id)arg2 suppressDOLC:(BOOL)arg3 ;
-(void)addSectionTemplateDrawables:(id)arg0 atIndex:(NSUInteger)arg1 insertContext:(id)arg2 suppressDOLC:(BOOL)arg3 ;
-(void)applyTag:(id)arg0 toPlaceholder:(id)arg1 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg0 ;
-(void)enumeratePlaceholderDrawablesWithBlock:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)removeSectionTemplateDrawable:(id)arg0 suppressDOLC:(BOOL)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setPrimitiveGeometry:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif