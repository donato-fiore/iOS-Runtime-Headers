// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIREVIEWMETADATA_H
#define SKUIREVIEWMETADATA_H

@class NSString, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKUIReviewMetadata : NSObject <NSCopying>



@property (copy, nonatomic) NSString *body; // ivar: _body
@property (readonly, nonatomic) NSUInteger bodyMaxLength; // ivar: _bodyMaxLength
@property (copy, nonatomic) NSString *nickname; // ivar: _nickname
@property (readonly, nonatomic) NSUInteger nicknameMaxLength; // ivar: _nicknameMaxLength
@property (nonatomic) float rating; // ivar: _rating
@property (readonly, nonatomic) NSURL *submitURL; // ivar: _submitURL
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSUInteger titleMaxLength; // ivar: _titleMaxLength


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithReviewDictionary:(id)arg0 ;


@end


#endif