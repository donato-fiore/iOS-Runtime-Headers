// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSASSETS_H
#define TPSASSETS_H

@class NSString, NSURL;
@protocol NSCopying, NSSecureCoding;


#import "TPSSerializableObject.h"

@interface TPSAssets : TPSSerializableObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *alt; // ivar: _alt
@property (copy, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (copy, nonatomic) NSString *caption; // ivar: _caption
@property (copy, nonatomic) NSString *fallbackId; // ivar: _fallbackId
@property (nonatomic) NSInteger imageExtensionType; // ivar: _imageExtensionType
@property (copy, nonatomic) NSString *imageId; // ivar: _imageId
@property (copy, nonatomic) NSString *posterId; // ivar: _posterId
@property (nonatomic) BOOL skipViewMode; // ivar: _skipViewMode
@property (copy, nonatomic) NSString *videoId; // ivar: _videoId


+(BOOL)supportsSecureCoding;
+(id)assetsFromDictionary:(id)arg0 ;
+(id)na_identity;
-(BOOL)hasImage;
-(BOOL)hasVideo;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 metadata:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif