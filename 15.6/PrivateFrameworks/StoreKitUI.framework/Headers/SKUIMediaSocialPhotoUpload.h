// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIMEDIASOCIALPHOTOUPLOAD_H
#define SKUIMEDIASOCIALPHOTOUPLOAD_H

@class NSString, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKUIMediaSocialPhotoUpload : NSObject <NSCopying>



@property (copy, nonatomic) NSString *MD5; // ivar: _MD5
@property (nonatomic) BOOL hasAlpha; // ivar: _hasAlpha
@property (nonatomic) NSUInteger height; // ivar: _height
@property (nonatomic) NSUInteger length; // ivar: _length
@property (copy, nonatomic) NSString *token; // ivar: _token
@property (copy, nonatomic) NSString *tokenType; // ivar: _tokenType
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (copy, nonatomic) NSNumber *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (nonatomic) NSUInteger width; // ivar: _width


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithUploadDictionary:(id)arg0 ;


@end


#endif