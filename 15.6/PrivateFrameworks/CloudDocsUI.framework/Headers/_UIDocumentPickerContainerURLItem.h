// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDOCUMENTPICKERCONTAINERURLITEM_H
#define _UIDOCUMENTPICKERCONTAINERURLITEM_H

@class UIDocumentPickerContainerItem, NSURL, NSString, NSArray, NSDate;



@interface _UIDocumentPickerContainerURLItem : UIDocumentPickerContainerItem {
    NSURL *_url;
    NSInteger _cachedType;
    NSString *_cachedTitle;
    NSString *_cachedSubtitle;
    NSString *_cachedSubtitle2;
    NSArray *_cachedTags;
    NSUInteger _cachedIndentation;
    NSString *_cachedSortPath;
    NSString *_cachedContentType;
    NSDate *_cachedContentModifiedDate;
    BOOL _cachedIsAlias;
    id *_generationIdentifier;
}




+(id)defaultKeys;
-(BOOL)attributesModified:(id)arg0 ;
-(BOOL)isAlias;
-(BOOL)renameable;
-(NSInteger)type;
-(NSUInteger)indentationLevel;
-(id)contentType;
-(id)initWithURL:(id)arg0 ;
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
-(void)cacheValues;


@end


#endif