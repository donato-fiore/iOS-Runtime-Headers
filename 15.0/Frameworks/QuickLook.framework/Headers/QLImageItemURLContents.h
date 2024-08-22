// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLIMAGEITEMURLCONTENTS_H
#define QLIMAGEITEMURLCONTENTS_H

@class NSURL;
@protocol NSSecureCoding;


#import "QLImageItemContents.h"

@interface QLImageItemURLContents : QLImageItemContents <NSSecureCoding>



@property (copy, nonatomic) NSURL *imageURL; // ivar: _imageURL


+(BOOL)supportsSecureCoding;
+(id)imageItemContentsWithImage:(id)arg0 imageURL:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif