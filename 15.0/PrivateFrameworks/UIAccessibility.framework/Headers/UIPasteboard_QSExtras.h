// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPASTEBOARD_QSEXTRAS_H
#define UIPASTEBOARD_QSEXTRAS_H

@class super;



@interface UIPasteboard_QSExtras : super



+(BOOL)_accessibilityUseQuickSpeakPasteBoard;
+(Class)safeCategoryBaseClass;
+(id)_accessibilityQuickSpeakPasteboard;
+(id)generalPasteboard;
+(id)pasteboardWithName:(id)arg0 create:(BOOL)arg1 ;
+(id)pasteboardWithUniqueName;
+(id)safeCategoryTargetClassName;
+(void)_accessibilitySetUseQuickSpeakPasteBoard:(BOOL)arg0 ;
-(BOOL)_accessibilityShouldSwapReceiverWithQuickSpeakPasteboard;
-(BOOL)containsPasteboardTypes:(id)arg0 ;
-(BOOL)containsPasteboardTypes:(id)arg0 inItemSet:(id)arg1 ;
-(NSInteger)changeCount;
-(NSInteger)numberOfItems;
-(id)URL;
-(id)URLs;
-(id)color;
-(id)colors;
-(id)dataForPasteboardType:(id)arg0 ;
-(id)dataForPasteboardType:(id)arg0 inItemSet:(id)arg1 ;
-(id)image;
-(id)images;
-(id)itemSetWithPasteboardTypes:(id)arg0 ;
-(id)items;
-(id)pasteboardTypes;
-(id)pasteboardTypesForItemSet:(id)arg0 ;
-(id)string;
-(id)strings;
-(id)valueForPasteboardType:(id)arg0 ;
-(id)valuesForPasteboardType:(id)arg0 inItemSet:(id)arg1 ;
-(void)addItems:(id)arg0 ;
-(void)setData:(id)arg0 forPasteboardType:(id)arg1 ;
-(void)setItems:(id)arg0 ;
-(void)setStrings:(id)arg0 ;
-(void)setValue:(id)arg0 forPasteboardType:(id)arg1 ;


@end


#endif