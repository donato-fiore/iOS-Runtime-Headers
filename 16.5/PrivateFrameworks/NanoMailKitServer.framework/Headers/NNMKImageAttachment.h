// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NNMKIMAGEATTACHMENT_H
#define NNMKIMAGEATTACHMENT_H

@protocol NSSecureCoding;


#import "NNMKAttachment.h"

@interface NNMKImageAttachment : NNMKAttachment <NSSecureCoding>



@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (nonatomic) BOOL renderOnClient; // ivar: _renderOnClient


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif