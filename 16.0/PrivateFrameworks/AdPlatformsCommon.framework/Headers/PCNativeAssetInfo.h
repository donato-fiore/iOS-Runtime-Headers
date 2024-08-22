// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCNATIVEASSETINFO_H
#define PCNATIVEASSETINFO_H

@class NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PCNativeAssetInfo : NSObject <NSSecureCoding>



@property (nonatomic) BOOL autoloop; // ivar: _autoloop
@property (nonatomic) CGFloat bitrate; // ivar: _bitrate
@property (nonatomic) NSInteger contentType; // ivar: _contentType
@property (nonatomic) NSInteger height; // ivar: _height
@property (nonatomic) NSInteger length; // ivar: _length
@property (retain, nonatomic) NSURL *url; // ivar: _url
@property (nonatomic) NSInteger width; // ivar: _width


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif