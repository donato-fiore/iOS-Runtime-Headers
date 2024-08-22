// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUSERSETUPPICTUREDATA_H
#define CNUSERSETUPPICTUREDATA_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNUserSetupPictureData : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGRect cropRect; // ivar: _cropRect
@property (retain, nonatomic) NSData *imageData; // ivar: _imageData
@property (retain, nonatomic) NSData *memojiMetadata; // ivar: _memojiMetadata
@property (retain, nonatomic) NSData *thumbnailImageData; // ivar: _thumbnailImageData


+(BOOL)supportsSecureCoding;
+(id)log;
+(id)userSetupPictureDataFromData:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImageData:(id)arg0 thumbnailImageData:(id)arg1 cropRect:(struct CGRect )arg2 memojiMetadata:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif