// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCARTICLETAGSEXPIRATION_H
#define FCARTICLETAGSEXPIRATION_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface FCArticleTagsExpiration : NSObject

@property (readonly, nonatomic) NSDate *expireTime; // ivar: _expireTime
@property (readonly, nonatomic) NSString *tagID; // ivar: _tagID


+(id)tagsExpirationsFromRecord:(id)arg0 ;
-(id)description;
-(id)initWithTagsExpiration:(id)arg0 ;


@end


#endif