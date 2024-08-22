// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSCRIPTMEDIAITEMCOLLECTION_H
#define SUSCRIPTMEDIAITEMCOLLECTION_H

@class NSArray, MPMediaItemCollection;


#import "SUScriptObject.h"
#import "SUScriptMediaItem.h"

@interface SUScriptMediaItemCollection : SUScriptObject {
    NSArray *_items;
    SUScriptMediaItem *_representativeItem;
    BOOL _watchingLibrary;
}


@property (readonly) NSInteger count;
@property (readonly) NSArray *items;
@property (readonly) NSArray *mediaTypes;
@property (readonly, nonatomic) MPMediaItemCollection *nativeCollection;
@property (readonly) SUScriptMediaItem *representativeItem;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)initWithItems:(id)arg0 ;
-(id)scriptAttributeKeys;
-(void)_beginWatchingLibraryIfNecessary;
-(void)_libraryChangedNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif