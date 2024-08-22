// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFBOOKMARK_H
#define DMFBOOKMARK_H

@class NSURL, NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DMFBookmark : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, copy, nonatomic) NSArray *children; // ivar: _children
@property (readonly, nonatomic, getter=isFavoritesFolder) BOOL favoritesFolder;
@property (readonly, nonatomic, getter=isFolder) BOOL folder;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic, getter=isReadingListFolder) BOOL readingListFolder;


+(BOOL)supportsSecureCoding;
+(id)favoritesFolderWithChildren:(id)arg0 ;
+(id)folderWithName:(id)arg0 children:(id)arg1 ;
+(id)folderWithName:(id)arg0 children:(id)arg1 identifier:(id)arg2 ;
+(id)leafBookmarkWithName:(id)arg0 URL:(id)arg1 ;
+(id)readingListFolderWithChildren:(id)arg0 ;
-(BOOL)_isFolderWithIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 URL:(id)arg1 children:(id)arg2 identifier:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif