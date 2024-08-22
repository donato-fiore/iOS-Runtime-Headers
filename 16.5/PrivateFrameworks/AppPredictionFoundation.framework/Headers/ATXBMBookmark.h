// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXBMBOOKMARK_H
#define ATXBMBOOKMARK_H

@class NSDictionary, NSURL, NSNumber;
@protocol NSSecureCoding, BMBookmark;

#import <Foundation/Foundation.h>


@interface ATXBMBookmark : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSObject<BMBookmark> *bookmark; // ivar: _bookmark
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSURL *urlPath; // ivar: _urlPath
@property (readonly, nonatomic) NSNumber *versionNumber; // ivar: _versionNumber


+(BOOL)_fileExistsAtPath:(id)arg0 ;
+(BOOL)_fileSizeWithinLimitsForPath:(id)arg0 maxFileSize:(NSUInteger)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)_dataFromPath:(id)arg0 ;
+(id)bookmarkFromData:(id)arg0 bookmarkLocation:(id)arg1 versionNumber:(id)arg2 ;
+(id)bookmarkFromURLPath:(id)arg0 maxFileSize:(NSUInteger)arg1 versionNumber:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXBMBookmark:(id)arg0 ;
-(BOOL)saveBookmarkWithError:(*id)arg0 ;
-(NSUInteger)hash;
-(id)allowedClassesForBookmarkSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURLPath:(id)arg0 versionNumber:(id)arg1 bookmark:(id)arg2 metadata:(id)arg3 ;
-(id)serializeBookmark:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif