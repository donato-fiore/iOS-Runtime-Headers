// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIMEDIASOCIALAUTHOR_H
#define SKUIMEDIASOCIALAUTHOR_H

@class NSString, NSArray, NSDictionary, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKUIMediaSocialAuthor : NSObject <NSCopying>



@property (copy, nonatomic) NSString *authorType; // ivar: _authorType
@property (copy, nonatomic) NSString *dsid; // ivar: _dsid
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSArray *permissions; // ivar: _permissions
@property (copy, nonatomic) NSDictionary *storePlatformData; // ivar: _storePlatformData
@property (copy, nonatomic) NSURL *thumbnailImageURL; // ivar: _thumbnailImageURL


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAuthorDictionary:(id)arg0 ;


@end


#endif