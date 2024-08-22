// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSMESSAGETEMPLATELAYOUT_H
#define MSMESSAGETEMPLATELAYOUT_H

@class NSString, UIImage, NSData, NSURL;
@protocol NSSecureCoding;


#import "MSMessageLayout.h"

@interface MSMessageTemplateLayout : MSMessageLayout <NSSecureCoding>



@property (copy, nonatomic) NSString *caption; // ivar: _caption
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic) NSString *imageSubtitle; // ivar: _imageSubtitle
@property (copy, nonatomic) NSString *imageTitle; // ivar: _imageTitle
@property (retain, nonatomic) NSData *mediaData; // ivar: _mediaData
@property (copy, nonatomic) NSURL *mediaFileURL; // ivar: _mediaFileURL
@property (retain, nonatomic) NSString *mediaType; // ivar: _mediaType
@property (copy, nonatomic) NSString *subcaption; // ivar: _subcaption
@property (copy, nonatomic) NSString *trailingCaption; // ivar: _trailingCaption
@property (copy, nonatomic) NSString *trailingSubcaption; // ivar: _trailingSubcaption


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_sanitizedCopy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif