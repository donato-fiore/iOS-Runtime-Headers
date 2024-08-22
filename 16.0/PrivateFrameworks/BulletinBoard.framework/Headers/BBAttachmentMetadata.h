// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BBATTACHMENTMETADATA_H
#define BBATTACHMENTMETADATA_H

@class NSURL, NSUUID, NSString, NSDictionary;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BBAttachmentMetadata : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, nonatomic) BOOL hiddenFromDefaultExpandedView; // ivar: _hiddenFromDefaultExpandedView
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSDictionary *thumbnailGeneratorUserInfo; // ivar: _thumbnailGeneratorUserInfo
@property (readonly, nonatomic) BOOL thumbnailHidden; // ivar: _thumbnailHidden
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSString *uniformType; // ivar: _uniformType


+(BOOL)supportsSecureCoding;
-(BOOL)hasContentModificationsRelativeTo:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithType:(NSInteger)arg0 URL:(id)arg1 identifier:(id)arg2 uniformType:(id)arg3 thumbnailGeneratorUserInfo:(id)arg4 thumbnailHidden:(BOOL)arg5 hiddenFromDefaultExpandedView:(BOOL)arg6 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif