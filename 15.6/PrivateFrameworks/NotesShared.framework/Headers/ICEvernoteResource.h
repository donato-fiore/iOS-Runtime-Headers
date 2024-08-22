// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICEVERNOTERESOURCE_H
#define ICEVERNOTERESOURCE_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICEvernoteResource : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *data; // ivar: _data
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSString *fileName; // ivar: _fileName
@property (nonatomic) CGFloat imageHeight; // ivar: _imageHeight
@property (nonatomic) CGFloat imageWidth; // ivar: _imageWidth
@property (nonatomic) BOOL isAttachment; // ivar: _isAttachment
@property (retain, nonatomic) NSString *md5Hash; // ivar: _md5Hash
@property (retain, nonatomic) NSString *mime; // ivar: _mime


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif