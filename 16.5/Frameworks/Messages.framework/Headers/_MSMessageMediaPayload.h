// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MSMESSAGEMEDIAPAYLOAD_H
#define _MSMESSAGEMEDIAPAYLOAD_H

@class NSString, NSDictionary, NSData, UIImage, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _MSMessageMediaPayload : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *accessibilityLabel; // ivar: _accessibilityLabel
@property (copy, nonatomic) NSDictionary *attributionInfo; // ivar: _attributionInfo
@property (copy, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) BOOL isSticker; // ivar: _isSticker
@property (copy, nonatomic) NSData *mediaData; // ivar: _mediaData
@property (copy, nonatomic) NSString *mediaFilename; // ivar: _mediaFilename
@property (copy, nonatomic) NSString *mediaType; // ivar: _mediaType
@property (copy, nonatomic) NSURL *mediaURL; // ivar: _mediaURL
@property (copy, nonatomic) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSticker:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif