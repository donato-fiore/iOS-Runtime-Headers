// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KNSLIDE_H
#define KNSLIDE_H

@class NSString, NSSet;
@protocol TSKModel, TSKTransformableObject;


#import "KNAbstractSlide.h"
#import "KNTemplateSlide.h"
#import "KNNoteInfo.h"

@interface KNSlide : KNAbstractSlide <TSKModel, TSKTransformableObject>

 {
    KNTemplateSlide *_templateSlide;
}


@property (readonly, nonatomic) BOOL areInfosUsingObjectPlaceholderGeometry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *infosUsingObjectPlaceholderGeometry; // ivar: _infosUsingObjectPlaceholderGeometry
@property (retain, nonatomic) KNNoteInfo *note; // ivar: _note
@property (readonly, nonatomic) BOOL slideObjectsLayerWithTemplate;
@property (readonly) Class superclass;
@property (retain, nonatomic) KNTemplateSlide *templateSlide;


+(id)blankSlideWithSlideNode:(id)arg0 templateSlide:(id)arg1 andShow:(id)arg2 ;
-(BOOL)isComponentRoot;
-(BOOL)isNoteSelectionPath:(id)arg0 ;
-(BOOL)isTemplateSlide;
-(BOOL)p_oneOrMoreDrawablesMayHaveImplicitBuildEventsInDrawables:(id)arg0 ;
-(BOOL)p_urlIsSlideSpecific:(id)arg0 ;
-(id)childEnumerator;
-(id)defaultBodyPlaceholder;
-(id)defaultSlideNumberPlaceholder;
-(id)defaultTitlePlaceholder;
-(id)infoCorrespondingToTemplateSlideInfo:(id)arg0 ;
-(id)infosToDisplay;
-(id)initWithSlideNode:(id)arg0 templateSlide:(id)arg1 andShow:(id)arg2 ;
-(id)p_slideNodeUUIDStringFromURL:(id)arg0 ;
-(id)packageLocator;
-(id)paragraphIndexesOfTopLevelBullets;
-(void)acceptVisitor:(id)arg0 ;
-(void)addInfoUsingObjectPlaceholderGeometry:(id)arg0 ;
-(void)addMapForStorage:(id)arg0 forHyperlink:(id)arg1 ;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)insertDrawables:(id)arg0 atIndex:(NSUInteger)arg1 dolcContext:(id)arg2 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_checkTemplateSlide;
-(void)removeDrawable:(id)arg0 ;
-(void)removeInfoUsingObjectPlaceholderGeometry:(id)arg0 ;
-(void)removeMapForStorage:(id)arg0 forHyperlink:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setToTemplateSlide:(id)arg0 ;
-(void)updateSlideSpecificHyperlinkMapForStorage:(id)arg0 oldHyperlink:(id)arg1 newHyperlink:(id)arg2 ;
-(void)updateSlideSpecificLinkMapForInfo:(id)arg0 newHyperlink:(id)arg1 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif