// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPASTEBOARD_H
#define UIPASTEBOARD_H

@class NSURL, NSArray, NSString;

#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "UIImage.h"

@interface UIPasteboard : NSObject

@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSArray *URLs;
@property (readonly, nonatomic) NSInteger _changeCountIgnoringPinningActivity;
@property (readonly, copy, nonatomic) NSArray *availableTypes;
@property (readonly, nonatomic) NSInteger changeCount;
@property (copy, nonatomic) UIColor *color;
@property (copy, nonatomic) NSArray *colors;
@property (readonly, nonatomic) BOOL hasColors;
@property (readonly, nonatomic) BOOL hasImages;
@property (readonly, nonatomic) BOOL hasStrings;
@property (readonly, nonatomic) BOOL hasURLs;
@property (copy, nonatomic) UIImage *image;
@property (copy, nonatomic) NSArray *images;
@property (copy, nonatomic) NSArray *itemProviders;
@property (copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSInteger numberOfItems;
@property (readonly, nonatomic) NSArray *pasteboardTypes;
@property (readonly, nonatomic, getter=isPersistent) BOOL persistent;
@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) NSArray *strings;


+(id)_pasteboardWithName:(id)arg0 create:(BOOL)arg1 ;
+(id)_pasteboardWithUniqueName;
+(id)generalPasteboard;
+(id)pasteboardWithName:(id)arg0 create:(BOOL)arg1 ;
+(id)pasteboardWithUniqueName;
+(void)_attemptAuthenticationWithMessage:(id)arg0 ;
+(void)_clearPinnedItemProvidersForPasteboardNamed:(id)arg0 ;
+(void)_performAsDataOwner:(NSInteger)arg0 block:(id)arg1 ;
+(void)_performAsDataOwnerForAction:(SEL)arg0 responder:(id)arg1 block:(id)arg2 ;
+(void)_pinItemProviders:(id)arg0 forPasteboardNamed:(id)arg1 withExpirationDate:(id)arg2 ;
+(void)removePasteboardWithName:(id)arg0 ;
+(void)setPasteSharingTokenFromOpenURL:(id)arg0 ;
-(BOOL)canInstantiateObjectsOfClass:(Class)arg0 ;
-(BOOL)containsPasteboardTypes:(id)arg0 ;
-(BOOL)containsPasteboardTypes:(id)arg0 inItemSet:(id)arg1 ;
-(id)_detectedPasteboardTypeStringsForTypes:(id)arg0 ;
-(id)_detectedPasteboardTypesForTypes:(id)arg0 ;
-(id)dataForPasteboardType:(id)arg0 ;
-(id)dataForPasteboardType:(id)arg0 inItemSet:(id)arg1 ;
-(id)itemProvidersForInstantiatingObjectsOfClass:(Class)arg0 ;
-(id)itemSetWithPasteboardTypes:(id)arg0 ;
-(id)pasteSharingToken;
-(id)pasteboardTypesForItemSet:(id)arg0 ;
-(id)valueForPasteboardType:(id)arg0 ;
-(id)valuesForPasteboardType:(id)arg0 inItemSet:(id)arg1 ;
-(void)_clearPinnedItemProviders;
-(void)_pinItemProviders:(id)arg0 expirationDate:(id)arg1 ;
-(void)_requestSecurePasteAuthenticationMessageWithContext:(NSUInteger)arg0 forClientVersionedPID:(NSInteger)arg1 completionBlock:(id)arg2 ;
-(void)addItems:(id)arg0 ;
-(void)detectPatternsForPatterns:(id)arg0 completionHandler:(id)arg1 ;
-(void)detectPatternsForPatterns:(id)arg0 inItemSet:(id)arg1 completionHandler:(id)arg2 ;
-(void)detectValuesForPatterns:(id)arg0 completionHandler:(id)arg1 ;
-(void)detectValuesForPatterns:(id)arg0 inItemSet:(id)arg1 completionHandler:(id)arg2 ;
-(void)setData:(id)arg0 forPasteboardType:(id)arg1 ;
-(void)setObjects:(id)arg0 ;
-(void)setObjects:(id)arg0 localOnly:(BOOL)arg1 expirationDate:(id)arg2 ;
-(void)setObjects:(id)arg0 options:(id)arg1 ;
-(void)setValue:(id)arg0 forPasteboardType:(id)arg1 ;


@end


#endif