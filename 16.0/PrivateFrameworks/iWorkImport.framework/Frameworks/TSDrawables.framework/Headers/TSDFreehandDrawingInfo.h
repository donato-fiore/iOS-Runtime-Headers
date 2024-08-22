// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDFREEHANDDRAWINGINFO_H
#define TSDFREEHANDDRAWINGINFO_H



#import "TSDGroupInfo.h"
#import "TSDShapeInfo.h"

@interface TSDFreehandDrawingInfo : TSDGroupInfo

@property (readonly, nonatomic) TSDShapeInfo *freehandDrawingSpacerShape; // ivar: _freehandDrawingSpacerShape
@property (nonatomic) CGFloat opacity; // ivar: _opacity


-(BOOL)allowsCaption;
-(BOOL)allowsTitle;
-(BOOL)isEffectivelyEmpty;
-(BOOL)isFreehandDrawing;
-(BOOL)shouldHaveFakeShapeInfoForPersistingEmptyGroup;
-(Class)layoutClass;
-(Class)repClass;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(id)allNestedChildrenInfosForWrap;
-(id)animationFilters;
-(id)childEnumerator;
-(id)childEnumeratorForUserSearch;
-(id)copyWithContext:(id)arg0 ;
-(id)infosToObserveForAttachedInfo;
-(id)initWithSpacerShapeAndContext:(id)arg0 geometry:(id)arg1 ;
-(id)tsaxTypeDescription;
-(id)typeName;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 upgradeDOLC:(BOOL)arg2 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif