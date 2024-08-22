// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPCANVASSELECTION_H
#define TPCANVASSELECTION_H

@class TSWPSelection, NSSet, NSString;
@protocol TSDCanvasSelection;



@interface TPCanvasSelection : TSWPSelection <TSDCanvasSelection>

 {
    NSSet *mInfos;
    NSSet *mExcludedInfos;
    NSSet *mAdditionalInfos;
}


@property (readonly, nonatomic) NSUInteger canvasSelectionKind;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger infoCount;
@property (readonly, nonatomic) NSSet *infos;
@property (readonly, nonatomic) NSSet *infosWithNonInteractiveInfos;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSSet *nonInteractiveInfos;
@property (readonly, nonatomic) NSSet *rawAdditionalInfos;
@property (readonly, nonatomic) NSSet *rawExcludedInfos;
@property (readonly, nonatomic) NSSet *rawInfos;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger unlockedInfoCount;
@property (readonly, nonatomic) NSSet *unlockedInfos;


+(Class)archivedSelectionClass;
+(id)canvasSelectionFromCanvasSelection:(id)arg0 withToggledInfo:(id)arg1 ;
+(id)canvasSelectionFromSelection:(id)arg0 ;
+(id)canvasSelectionFromSelection:(id)arg0 withInfos:(id)arg1 ;
+(id)emptySelection;
+(id)selectionWithInfos:(id)arg0 ;
-(BOOL)containsKindOfClass:(Class)arg0 ;
-(BOOL)containsUnlockedKindOfClass:(Class)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)UUIDDescription;
-(id)copyExcludingInfo:(id)arg0 ;
-(id)copyIncludingInfo:(id)arg0 ;
-(id)copyWithNewRange:(struct _NSRange )arg0 ;
-(id)copyWithNewStyleInsertionBehavior:(int)arg0 newCaretAffinity:(int)arg1 ;
-(id)copyWithNewType:(int)arg0 ;
-(id)copyWithNewType:(int)arg0 range:(struct _NSRange )arg1 ;
-(id)copyWithNewType:(int)arg0 smartFieldRange:(struct _NSRange )arg1 ;
-(id)copyWithNewVisualRanges:(id)arg0 ;
-(id)copyWithNewVisualTypeRange:(struct _NSRange )arg0 head:(NSUInteger)arg1 tail:(NSUInteger)arg2 ;
-(id)copyWithVisualRanges:(id)arg0 headCharIndex:(NSUInteger)arg1 tailCharIndex:(NSUInteger)arg2 rightToLeft:(BOOL)arg3 sameLine:(BOOL)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)infosOfClass:(Class)arg0 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithInfos:(id)arg0 ;
-(id)initWithTextSelection:(id)arg0 infos:(id)arg1 excludedInfos:(id)arg2 additionalInfos:(id)arg3 ;
-(id)initWithType:(int)arg0 range:(struct _NSRange )arg1 styleInsertionBehavior:(int)arg2 caretAffinity:(int)arg3 smartFieldRange:(struct _NSRange )arg4 leadingEdge:(BOOL)arg5 leadingCharIndex:(NSUInteger)arg6 infos:(id)arg7 excludedInfos:(id)arg8 additionalInfos:(id)arg9 ;
-(id)p_UUIDDescriptionsForInfosSet:(id)arg0 ;
-(void)p_commonCopyTo:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif