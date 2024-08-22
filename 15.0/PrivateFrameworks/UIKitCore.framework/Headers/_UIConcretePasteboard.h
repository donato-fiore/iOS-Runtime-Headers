// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICONCRETEPASTEBOARD_H
#define _UICONCRETEPASTEBOARD_H

@class NSString;


#import "UIPasteboard.h"

@interface _UIConcretePasteboard : UIPasteboard

@property (copy, nonatomic) NSString *name; // ivar: _name


+(id)_pasteboardNamed:(id)arg0 createIfNotFound:(BOOL)arg1 ;
+(id)_pasteboardWithName:(id)arg0 create:(BOOL)arg1 ;
+(id)_pasteboardWithUniqueName;
+(id)_remoteContentForLayerContextWithId:(NSUInteger)arg0 slotStyle:(id)arg1 pasteButtonTag:(id)arg2 ;
+(id)clientValueForValue:(id)arg0 pattern:(id)arg1 ;
+(id)generalPasteboard;
+(id)pasteboardWithName:(id)arg0 create:(BOOL)arg1 ;
+(id)pasteboardWithUniqueName;
// +(void)_asynchronouslyEnumerateItemSet:(id)arg0 itemsCompletionHandler:(id)arg1 usingItemBlock:(unk)arg2  ;
+(void)_attemptAuthenticationWithMessage:(id)arg0 ;
+(void)_clearPinnedItemProvidersForPasteboardNamed:(id)arg0 ;
+(void)_detectPatternsForPatterns:(id)arg0 atIndex:(NSUInteger)arg1 itemCollection:(id)arg2 completionHandler:(id)arg3 ;
+(void)_detectValuesForPatterns:(id)arg0 atIndex:(NSUInteger)arg1 itemCollection:(id)arg2 completionHandler:(id)arg3 ;
+(void)_pinItemProviders:(id)arg0 forPasteboardNamed:(id)arg1 withExpirationDate:(id)arg2 ;
+(void)removePasteboardWithName:(id)arg0 ;
-(BOOL)_pasteboardCacheQueue_isPersistent;
-(BOOL)_pasteboardCacheQueue_saveItemCollection:(id)arg0 currentNotificationState:(NSUInteger)arg1 outNewNotificationState:(*NSUInteger)arg2 ;
-(BOOL)_pasteboardCacheQueue_setPersistent:(BOOL)arg0 currentNotificationState:(NSUInteger)arg1 outNewNotificationState:(*NSUInteger)arg2 ;
-(BOOL)canInstantiateObjectsOfClass:(Class)arg0 ;
-(BOOL)containsPasteboardTypes:(id)arg0 ;
-(BOOL)containsPasteboardTypes:(id)arg0 inItemSet:(id)arg1 ;
-(BOOL)hasColors;
-(BOOL)hasImages;
-(BOOL)hasStrings;
-(BOOL)hasURLs;
-(BOOL)isPersistent;
-(NSInteger)_changeCountIgnoringPinningActivity;
-(NSInteger)changeCount;
-(NSInteger)numberOfItems;
-(id)URL;
-(id)URLs;
-(id)_detectedPasteboardTypeStringsForTypes:(id)arg0 ;
-(id)_detectedPasteboardTypesForTypes:(id)arg0 ;
-(id)_initWithName:(id)arg0 ;
-(id)_itemsCoercibleToClass:(Class)arg0 ;
-(id)availableTypes;
-(id)color;
-(id)colors;
-(id)dataForPasteboardType:(id)arg0 ;
-(id)dataForPasteboardType:(id)arg0 inItemSet:(id)arg1 ;
-(id)image;
-(id)images;
-(id)itemProviders;
-(id)itemProvidersForInstantiatingObjectsOfClass:(Class)arg0 ;
-(id)itemProvidersWithRetryBehavior:(BOOL)arg0 ;
-(id)itemSetWithPasteboardTypes:(id)arg0 ;
-(id)items;
-(id)pasteboardTypes;
-(id)pasteboardTypesForItemSet:(id)arg0 ;
-(id)string;
-(id)strings;
-(id)valueForPasteboardType:(id)arg0 ;
-(id)valuesForPasteboardType:(id)arg0 inItemSet:(id)arg1 ;
-(void)_clearItems;
-(void)_clearPinnedItemProviders;
-(void)_pinItemCollection:(id)arg0 ;
-(void)_pinItemProviders:(id)arg0 expirationDate:(id)arg1 ;
-(void)_saveItemCollection:(id)arg0 ;
-(void)_sendPasteboardTypesChangedNotificationOldTypes:(id)arg0 newTypes:(id)arg1 ;
-(void)_setItemsAndSave:(id)arg0 options:(id)arg1 ;
-(void)_setItemsAndSave:(id)arg0 options:(id)arg1 coerceStringsToURLs:(BOOL)arg2 ;
-(void)_setItemsAndSave:(id)arg0 options:(id)arg1 coerceStringsToURLs:(BOOL)arg2 dataOwner:(NSInteger)arg3 ;
-(void)_setItemsAndSaveFromObjects:(id)arg0 ofClass:(Class)arg1 ;
-(void)_setPersistent:(BOOL)arg0 ;
-(void)addItems:(id)arg0 ;
-(void)detectPatternsForPatterns:(id)arg0 completionHandler:(id)arg1 ;
-(void)detectPatternsForPatterns:(id)arg0 inItemSet:(id)arg1 completionHandler:(id)arg2 ;
-(void)detectValuesForPatterns:(id)arg0 completionHandler:(id)arg1 ;
-(void)detectValuesForPatterns:(id)arg0 inItemSet:(id)arg1 completionHandler:(id)arg2 ;
-(void)setColor:(id)arg0 ;
-(void)setColors:(id)arg0 ;
-(void)setData:(id)arg0 forPasteboardType:(id)arg1 ;
-(void)setImage:(id)arg0 ;
-(void)setImages:(id)arg0 ;
-(void)setItemProviders:(id)arg0 ;
-(void)setItemProviders:(id)arg0 localOnly:(BOOL)arg1 expirationDate:(id)arg2 ;
-(void)setItemProviders:(id)arg0 options:(id)arg1 ;
-(void)setItems:(id)arg0 ;
-(void)setItems:(id)arg0 options:(id)arg1 ;
-(void)setObjects:(id)arg0 ;
-(void)setObjects:(id)arg0 localOnly:(BOOL)arg1 expirationDate:(id)arg2 ;
-(void)setObjects:(id)arg0 options:(id)arg1 ;
-(void)setPersistent:(BOOL)arg0 ;
-(void)setString:(id)arg0 ;
-(void)setStrings:(id)arg0 ;
-(void)setURL:(id)arg0 ;
-(void)setURLs:(id)arg0 ;
-(void)setValue:(id)arg0 forPasteboardType:(id)arg1 ;


@end


#endif