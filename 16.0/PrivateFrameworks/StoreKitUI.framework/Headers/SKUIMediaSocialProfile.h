// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIMEDIASOCIALPROFILE_H
#define SKUIMEDIASOCIALPROFILE_H

@class NSURL, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKUIMediaSocialProfile : NSObject <NSCopying>



@property (copy, nonatomic) NSURL *backgroundImageURL; // ivar: _backgroundImageURL
@property (copy, nonatomic) NSString *bio; // ivar: _bio
@property (copy, nonatomic) NSString *handle; // ivar: _handle
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSURL *profileImageURL; // ivar: _profileImageURL
@property (copy, nonatomic) NSString *profileType; // ivar: _profileType


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithProfileDictionary:(id)arg0 ;


@end


#endif