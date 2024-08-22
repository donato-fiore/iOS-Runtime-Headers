// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDOCUMENTPICKERCONTAINERITEM_H
#define _UIDOCUMENTPICKERCONTAINERITEM_H

@class NSOperation, NSString, NSDate, NSMapTable, NSURL;
@protocol _UIDocumentPickerDirectoryObserverItem;

#import <Foundation/Foundation.h>

#import "_UIDocumentPickerURLContainerModel.h"
#import "_UIDocumentPickerContainerModel.h"

@interface _UIDocumentPickerContainerItem : NSObject <_UIDocumentPickerDirectoryObserverItem>

 {
    _UIDocumentPickerURLContainerModel *_model;
    _UIDocumentPickerURLContainerModel *_weak_model;
    NSInteger _modelDisplayCount;
    id *_resourceIdentifier;
    NSOperation *_thumbnailLoadOperation;
    BOOL _hasCachedIsAlias;
    BOOL _cachedIsAlias;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) _UIDocumentPickerContainerModel *model;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (weak, nonatomic) _UIDocumentPickerContainerModel *parentModel; // ivar: _parentModel
@property (copy, nonatomic) NSString *pickabilityReason; // ivar: _pickabilityReason
@property (nonatomic) BOOL pickable; // ivar: _pickable
@property (readonly, nonatomic) BOOL renameable;
@property (readonly, retain, nonatomic) NSString *subtitle;
@property (readonly, retain, nonatomic) NSString *subtitle2;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMapTable *thumbnailsBySize; // ivar: _thumbnailsBySize
@property (readonly, retain, nonatomic) NSString *title;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, retain, nonatomic) NSURL *url;
@property (readonly, retain, nonatomic) NSURL *urlInLocalContainer;


+(id)_blockingBadgeForContainer:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 ;
+(id)_blockingFolderIconForURL:(id)arg0 container:(id)arg1 size:(struct CGSize )arg2 scale:(CGFloat)arg3 ;
+(id)_blockingIconForDocumentProxy:(id)arg0 withSize:(struct CGSize )arg1 ;
+(id)_blockingIconForURL:(id)arg0 withSize:(struct CGSize )arg1 ;
+(id)_blockingThumbnailForItem:(id)arg0 documentProxy:(id)arg1 withSize:(struct CGSize )arg2 scale:(CGFloat)arg3 wantsBorder:(*BOOL)arg4 generatedThumbnail:(*BOOL)arg5 ;
+(id)_lruThumbnailArray;
+(void)clearLRUThumbnailCache;
+(void)markThumbnailAsRecentlyUsed:(id)arg0 ;
-(BOOL)isActionApplicableForItem:(NSInteger)arg0 ;
-(BOOL)isAlias;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)indentationLevel;
-(id)_blipWithTags:(id)arg0 height:(CGFloat)arg1 scale:(CGFloat)arg2 ;
-(id)_blockingThumbnailWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 wantsBorder:(*BOOL)arg2 ;
-(id)_createThumbnailWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(id)_formattedSubtitleForNumberOfItems:(NSUInteger)arg0 ;
-(id)_resourceIdentifier;
-(id)contentType;
-(id)init;
-(id)sortPath;
-(id)tagBlipsWithHeight:(CGFloat)arg0 scale:(CGFloat)arg1 ;
-(id)tags;
-(id)thumbnailWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(void)_ensureModelPresent;
-(void)dealloc;
-(void)decrementModelDisplayCount;
-(void)incrementModelDisplayCount;


@end


#endif