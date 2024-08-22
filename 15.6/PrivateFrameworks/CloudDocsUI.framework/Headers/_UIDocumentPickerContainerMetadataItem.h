// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDOCUMENTPICKERCONTAINERMETADATAITEM_H
#define _UIDOCUMENTPICKERCONTAINERMETADATAITEM_H

@class UIDocumentPickerContainerItem, NSString, NSArray, NSURL, NSDate, NSNumber;



@interface _UIDocumentPickerContainerMetadataItem : UIDocumentPickerContainerItem {
    NSInteger _cachedType;
    NSString *_cachedTitle;
    NSString *_cachedSubtitle;
    NSString *_cachedSubtitle2;
    NSArray *_cachedTags;
    NSURL *_cachedURL;
    NSURL *_cachedURLInLocalContainer;
    NSUInteger _cachedIndentation;
    NSString *_cachedSortPath;
    NSString *_cachedContentType;
    NSDate *_cachedContentModifiedDate;
    NSNumber *_cachedFileObjectID;
    BOOL _cachedRenameable;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)renameable;
-(NSInteger)type;
-(NSUInteger)hash;
-(NSUInteger)indentationLevel;
-(id)contentType;
-(id)initWithMetadataItem:(id)arg0 ;
-(id)modificationDate;
-(id)sortPath;
-(id)sortPathComponents;
-(id)subtitle;
-(id)subtitle2;
-(id)tags;
-(id)title;
-(id)url;
-(id)urlInLocalContainer;
-(void)_cacheIndentationLevelWithSortPathComponents:(id)arg0 ;
-(void)_modelChanged;
-(void)_removeCachedValues;
-(void)cacheValues:(id)arg0 ;


@end


#endif