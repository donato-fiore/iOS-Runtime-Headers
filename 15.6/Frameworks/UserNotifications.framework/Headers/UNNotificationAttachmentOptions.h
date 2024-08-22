// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UNNOTIFICATIONATTACHMENTOPTIONS_H
#define UNNOTIFICATIONATTACHMENTOPTIONS_H

@class NSDictionary;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UNNotificationAttachmentOptions : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger displayLocation; // ivar: _displayLocation
@property (readonly, copy, nonatomic) NSDictionary *thumbnailGeneratorUserInfo; // ivar: _thumbnailGeneratorUserInfo


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithDisplayLocation:(NSUInteger)arg0 thumbnailGeneratorUserInfo:(id)arg1 ;
-(id)_initWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif