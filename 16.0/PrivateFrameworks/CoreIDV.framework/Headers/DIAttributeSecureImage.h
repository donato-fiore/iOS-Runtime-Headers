// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DIATTRIBUTESECUREIMAGE_H
#define DIATTRIBUTESECUREIMAGE_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DIAttributeSecureImage : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSData *flags; // ivar: _flags
@property (copy, nonatomic) NSData *imageData; // ivar: _imageData
@property (copy, nonatomic) NSData *signature; // ivar: _signature


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImageData:(id)arg0 signature:(id)arg1 flags:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif