// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKPHONENUMBERCOMPRESSOR_H
#define CKPHONENUMBERCOMPRESSOR_H

@class UIFont, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface CKPhoneNumberCompressor : NSObject

@property (nonatomic) CGFloat desiredWidth; // ivar: _desiredWidth
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (copy, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (copy, nonatomic) NSArray *preferredCompressions; // ivar: _preferredCompressions


-(id)_compressPhoneNumberIfFitsInCompressionLevel:(int)arg0 ;
-(id)compress;


@end


#endif