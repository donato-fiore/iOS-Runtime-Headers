// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMNICKNAME_H
#define IMNICKNAME_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "IMNicknameAvatarImage.h"

@interface IMNickname : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) IMNicknameAvatarImage *avatar; // ivar: _avatar
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (retain, nonatomic) NSString *handle; // ivar: _handle
@property (readonly, nonatomic) NSString *imageHash;
@property (copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (readonly, nonatomic) NSString *nameHash;
@property (retain, nonatomic) NSString *recordID; // ivar: _recordID


+(BOOL)supportsSecureCoding;
+(id)nameHashWithFirstName:(id)arg0 lastName:(id)arg1 ;
+(id)uniqueFilePathForWritingImageData;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isUpdateFromNickname:(id)arg0 withOptions:(NSUInteger)arg1 ;
-(id)_sharingState;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataRepresentation;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithFirstName:(id)arg0 lastName:(id)arg1 avatar:(id)arg2 ;
-(id)initWithMeContact:(id)arg0 ;
-(id)initWithPublicDictionaryRepresentationWithoutAvatar:(id)arg0 ;
-(id)publicDictionaryRepresentation;
-(id)publicDictionaryRepresentationWithoutAvatar;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateNameFromContact:(id)arg0 ;


@end


#endif