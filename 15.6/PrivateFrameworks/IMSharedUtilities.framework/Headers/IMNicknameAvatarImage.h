// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMNICKNAMEAVATARIMAGE_H
#define IMNICKNAMEAVATARIMAGE_H

@class NSString;
@protocol NSSecureCoding;


#import "IMNicknameAvatar.h"

@interface IMNicknameAvatarImage : IMNicknameAvatar <NSSecureCoding>



@property (readonly, nonatomic) BOOL hasImage;
@property (readonly, nonatomic) BOOL imageExists;
@property (copy, nonatomic) NSString *imageFilePath; // ivar: _imageFilePath
@property (copy, nonatomic) NSString *imageName; // ivar: _imageName


+(BOOL)supportsSecureCoding;
-(BOOL)_writeImageData:(id)arg0 path:(id)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)imageData;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithImageName:(id)arg0 imageData:(id)arg1 imageFilePath:(id)arg2 ;
-(id)initWithImageName:(id)arg0 imageData:(id)arg1 imageFilePath:(id)arg2 error:(*id)arg3 ;
-(id)initWithImageName:(id)arg0 imageFilePath:(id)arg1 ;
-(id)initWithPublicDictionaryMetadataRepresentation:(id)arg0 ;
-(id)initWithPublicDictionaryMetadataRepresentation:(id)arg0 imageData:(id)arg1 imageFilePath:(id)arg2 error:(*id)arg3 ;
-(id)loadAndReturnImageData;
-(id)publicDictionaryMetadataRepresentation;
-(id)publicDictionaryRepresentation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif