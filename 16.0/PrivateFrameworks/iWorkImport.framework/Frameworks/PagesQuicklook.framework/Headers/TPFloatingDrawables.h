// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPFLOATINGDRAWABLES_H
#define TPFLOATINGDRAWABLES_H

@class TSPObject, NSMutableDictionary, NSMapTable, NSSet, NSString, NSIndexSet, NSArray;
@protocol TSKDocumentObject, TSKModel;


#import "TPDocumentRoot.h"

@interface TPFloatingDrawables : TSPObject <TSKDocumentObject, TSKModel>

 {
    NSMutableDictionary *_drawablesByPageIndex;
    NSMapTable *_pageIndexByDrawable;
    NSMapTable *_tagByDrawable;
}


@property (readonly, nonatomic) NSSet *allDrawables;
@property (readonly, nonatomic) NSUInteger countOfAllDrawables;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) TPDocumentRoot *documentRoot; // ivar: _documentRoot
@property (readonly, nonatomic) BOOL hasAnyDrawables;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger maximumPageIndex;
@property (readonly, nonatomic) NSIndexSet *pageIndexesOfPagesContainingDrawables;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *swift_allDrawables;


-(NSUInteger)pageIndexForDrawable:(id)arg0 ;
-(id)childEnumerator;
-(id)drawableEnumerator;
-(id)drawablesOnPageIndex:(NSUInteger)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)orderedDrawablesOnPageIndex:(NSUInteger)arg0 ;
-(id)swift_drawablesOnPageIndex:(NSUInteger)arg0 ;
-(id)tagForDrawable:(id)arg0 ;
-(void)addDrawable:(id)arg0 toPageIndex:(NSUInteger)arg1 insertContext:(id)arg2 ;
-(void)addDrawable:(id)arg0 toPageIndex:(NSUInteger)arg1 insertContext:(id)arg2 suppressDOLC:(BOOL)arg3 ;
-(void)addDrawables:(id)arg0 toPageIndex:(NSUInteger)arg1 insertContext:(id)arg2 ;
-(void)applyTag:(id)arg0 toDrawable:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)moveDrawable:(id)arg0 toPageIndex:(NSUInteger)arg1 ;
-(void)p_addDrawable:(id)arg0 toPageIndex:(NSUInteger)arg1 ;
-(void)p_removeDrawable:(id)arg0 ;
-(void)removeDrawable:(id)arg0 ;
-(void)removeDrawable:(id)arg0 suppressDOLC:(BOOL)arg1 ;
-(void)removeDrawables:(id)arg0 ;
-(void)removeTagForDrawable:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif