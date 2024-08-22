// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNVISUALIDENTITY_H
#define CNVISUALIDENTITY_H

@class NSString, UIImage, NSArray, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CNVisualIdentity : NSObject <NSCopying>



@property (retain, nonatomic) NSString *abbreviatedName; // ivar: _abbreviatedName
@property (retain, nonatomic) UIImage *avatarImage; // ivar: _avatarImage
@property (readonly, nonatomic) NSUInteger contactImageType;
@property (retain, nonatomic) NSArray *contacts; // ivar: _contacts
@property (nonatomic) CGRect cropRect; // ivar: _cropRect
@property (retain, nonatomic) NSData *fullscreenImageData; // ivar: _fullscreenImageData
@property (readonly, nonatomic) BOOL hasLinkedContacts;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger identityType; // ivar: _identityType
@property (retain, nonatomic) NSData *imageData; // ivar: _imageData
@property (retain, nonatomic) NSData *imageHash; // ivar: _imageHash
@property (nonatomic) NSString *imageType; // ivar: _imageType
@property (retain, nonatomic) NSArray *linkedContacts; // ivar: _linkedContacts
@property (retain, nonatomic) NSData *memojiMetadata; // ivar: _memojiMetadata
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSData *thumbnailImageData; // ivar: _thumbnailImageData


+(id)abbreviatedNameForGroupName:(id)arg0 ;
+(id)descriptorForImageKeys;
+(id)descriptorForRequiredKeys;
+(id)firstComposedCharacterFromString:(id)arg0 ;
+(id)log;
-(BOOL)canUpdateGroupName;
-(BOOL)hasImageDataAvailable;
-(BOOL)imageAllowsEditing;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContact:(id)arg0 ;
-(id)initWithGroupIdentity:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)clearImage;
-(void)updateGroupName:(id)arg0 ;
-(void)updateImageForContact:(id)arg0 ;
-(void)updateImageType:(NSUInteger)arg0 ;


@end


#endif