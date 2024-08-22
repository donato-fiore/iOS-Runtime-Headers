// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIFACEBOOKLIKESTATUS_H
#define SKUIFACEBOOKLIKESTATUS_H

@class NSURL, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKUIFacebookLikeStatus : NSObject <NSCopying>



@property (copy, nonatomic) NSURL *URL; // ivar: _url
@property (copy, nonatomic) NSArray *friendNames; // ivar: _friends
@property (nonatomic, getter=isUserLiked) BOOL userLiked; // ivar: _userLiked


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithURL:(id)arg0 likeStatusDictionary:(id)arg1 ;


@end


#endif