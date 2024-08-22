// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKBOOKMARK_H
#define CRKBOOKMARK_H

@class NSURL, NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRKBookmark : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (copy, nonatomic) NSArray *children; // ivar: _children
@property (readonly, nonatomic, getter=isFavoritesFolder) BOOL favoritesFolder;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic, getter=isReadingListFolder) BOOL readingListFolder;


+(BOOL)supportsSecureCoding;
+(id)favoritesFolderWithChildren:(id)arg0 ;
+(id)folderWithName:(id)arg0 children:(id)arg1 ;
+(id)folderWithName:(id)arg0 children:(id)arg1 identifier:(id)arg2 ;
+(id)leafBookmarkWithName:(id)arg0 URL:(id)arg1 ;
+(id)readingListFolderWithChildren:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFolder;
-(BOOL)isFolderWithIdentifier:(id)arg0 ;
-(NSUInteger)hash;
-(id)childBookmarks;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 URL:(id)arg1 children:(id)arg2 identifier:(id)arg3 ;
-(id)urlString;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setChildBookmarks:(id)arg0 ;
-(void)setUrlString:(id)arg0 ;


@end


#endif