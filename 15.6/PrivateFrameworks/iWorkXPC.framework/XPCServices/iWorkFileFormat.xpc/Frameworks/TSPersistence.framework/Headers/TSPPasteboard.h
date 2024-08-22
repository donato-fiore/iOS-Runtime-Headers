// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPPASTEBOARD_H
#define TSPPASTEBOARD_H

@class UIPasteboard, NSArray, NSString;
@protocol TSPDecoder;

#import <Foundation/Foundation.h>


@interface TSPPasteboard : NSObject <TSPDecoder>

 {
    UIPasteboard *_pasteboard;
}


@property (readonly, nonatomic) NSArray *URLs;
@property (readonly, nonatomic) NSInteger changeCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isSmartCopy;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSInteger numberOfItems;
@property (readonly, nonatomic) NSUInteger pasteboardItemMaxSize;
@property (readonly, nonatomic) NSArray *richTextStrings;
@property (copy, nonatomic) NSString *string;
@property (readonly, nonatomic) NSArray *strings;
@property (readonly) Class superclass;


+(Class)pasteboardClass;
+(id)activePasteboardForName:(id)arg0 ;
+(id)activePasteboards;
+(id)activePasteboardsQueue;
+(id)generalPasteboard;
+(id)pasteboardWithName:(id)arg0 create:(BOOL)arg1 ;
+(id)pasteboardWithPasteboard:(id)arg0 ;
+(id)pasteboardWithUniqueName;
-(BOOL)canLoadItemsOfClass:(Class)arg0 ;
-(BOOL)containsAnyPasteboardTypeInArray:(id)arg0 ;
-(BOOL)containsImportableRichTextTypes;
-(BOOL)containsImportableTextTypes;
-(BOOL)containsNativePasteboardTypes;
-(BOOL)containsPasteboardTypes:(id)arg0 ;
-(NSInteger)clearContents;
-(id)dataForPasteboardType:(id)arg0 ;
-(id)dataForPasteboardType:(id)arg0 inItemSet:(id)arg1 ;
-(id)importableImageTypes;
-(id)importableRichTextTypes;
-(id)initWithGeneralPasteboard;
-(id)initWithNativePasteboard:(id)arg0 ;
-(id)initWithPasteboardName:(id)arg0 create:(BOOL)arg1 ;
-(id)initWithUniquePasteboardName;
-(id)newReadChannelForDataWithIdentifier:(NSInteger)arg0 info:(id)arg1 ;
-(id)newReadChannelForMetadata;
-(id)newReadChannelForRootObjectComponent;
-(id)pasteboardTypes;
-(id)pasteboardTypesForItemSet:(id)arg0 ;
-(id)stringForPasteboardType:(id)arg0 ;
-(id)stringsForPasteboardType:(id)arg0 inItemSet:(id)arg1 ;
-(id)valueForPasteboardType:(id)arg0 ;
-(id)valuesForPasteboardType:(id)arg0 inItemSet:(id)arg1 ;
-(void)addData:(id)arg0 forPasteboardType:(id)arg1 ;
-(void)addItems:(id)arg0 ;
-(void)addItems:(id)arg0 isSmartCopy:(BOOL)arg1 ;
-(void)invalidate;


@end


#endif