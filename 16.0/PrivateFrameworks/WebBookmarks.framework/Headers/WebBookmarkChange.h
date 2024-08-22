// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBBOOKMARKCHANGE_H
#define WEBBOOKMARKCHANGE_H

@class NSArray, NSString, NSDictionary;
@protocol WBChange;

#import <Foundation/Foundation.h>

#import "WebBookmark.h"

@interface WebBookmarkChange : NSObject <WBChange>



@property (nonatomic) int associatedBookmarkID; // ivar: _associatedBookmarkID
@property (readonly, nonatomic) WebBookmark *bookmark; // ivar: _bookmark
@property (nonatomic) int bookmarkID; // ivar: _bookmarkID
@property (copy, nonatomic) NSArray *bookmarks; // ivar: _bookmarks
@property (readonly, nonatomic) NSInteger changeType; // ivar: _changeType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger modifiedAttributes; // ivar: _modifiedAttributes
@property (nonatomic) int parentID; // ivar: _parentID
@property (readonly, nonatomic) BOOL shouldSync;
@property (nonatomic) int specialFolderID; // ivar: _specialFolderID
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)bookmarkAddChangeWithBookmark:(id)arg0 ;
+(id)bookmarkModifyChangeWithBookmark:(id)arg0 ;
+(id)deleteChangeWithBookmark:(id)arg0 ;
+(id)moveChangeWithBookmark:(id)arg0 toFolderWithID:(int)arg1 ;
+(id)reorderChangeWithBookmark:(id)arg0 afterBookmark:(id)arg1 ;
+(id)replaceChangeWithBookmarks:(id)arg0 inFolderWithID:(int)arg1 ;
+(id)replaceChangeWithBookmarks:(id)arg0 inFolderWithSpecialID:(int)arg1 ;
-(BOOL)attributesMarkedAsModify:(NSUInteger)arg0 ;
-(id)_stringForType:(NSInteger)arg0 ;
-(id)initWithBookmark:(id)arg0 bookmarkID:(int)arg1 parentID:(int)arg2 associatedBookmarkID:(int)arg3 changeType:(NSInteger)arg4 ;
-(id)initWithBookmark:(id)arg0 bookmarkID:(int)arg1 parentID:(int)arg2 changeType:(NSInteger)arg3 ;
-(id)initWithBookmarkID:(int)arg0 parentID:(int)arg1 associatedBookmarkID:(int)arg2 changeType:(NSInteger)arg3 ;
-(id)initWithBookmarkID:(int)arg0 parentID:(int)arg1 changeType:(NSInteger)arg2 ;
-(id)initWithBookmarks:(id)arg0 parentID:(int)arg1 changeType:(NSInteger)arg2 ;
-(id)initWithBookmarks:(id)arg0 parentID:(int)arg1 specialFolderID:(int)arg2 changeType:(NSInteger)arg3 ;
-(id)initWithBookmarks:(id)arg0 specialFolderID:(int)arg1 changeType:(NSInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(void)applyModificationsToBookmark:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateChangeAfterUpdatingInMemoryID:(int)arg0 withDatabaseID:(int)arg1 ;


@end


#endif