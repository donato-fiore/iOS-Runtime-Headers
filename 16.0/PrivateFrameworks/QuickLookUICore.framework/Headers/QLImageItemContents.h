// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLIMAGEITEMCONTENTS_H
#define QLIMAGEITEMCONTENTS_H

@class UIImage;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface QLImageItemContents : NSObject <NSSecureCoding>



@property (copy, nonatomic) UIImage *image; // ivar: _image


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImage:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif