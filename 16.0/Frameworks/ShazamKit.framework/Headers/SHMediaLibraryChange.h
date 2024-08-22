// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHMEDIALIBRARYCHANGE_H
#define SHMEDIALIBRARYCHANGE_H

@class NSIndexPath;
@protocol NSSecureCoding, NSCopying, SHMediaLibraryItem;

#import <Foundation/Foundation.h>


@interface SHMediaLibraryChange : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSInteger changeType; // ivar: _changeType
@property (readonly, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (readonly, nonatomic) NSObject<SHMediaLibraryItem> *libraryItem; // ivar: _libraryItem


+(BOOL)supportsSecureCoding;
-(BOOL)isConflictingChange:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualChange:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithLibraryItem:(id)arg0 changeType:(NSInteger)arg1 indexPath:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLibraryItem:(id)arg0 changeType:(NSInteger)arg1 ;
-(id)initWithLibraryItem:(id)arg0 changeType:(NSInteger)arg1 indexPath:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif