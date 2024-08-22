// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLIMAGEITEMDATACONTENTS_H
#define QLIMAGEITEMDATACONTENTS_H

@class NSData;
@protocol NSSecureCoding;


#import "QLImageItemContents.h"

@interface QLImageItemDataContents : QLImageItemContents <NSSecureCoding>



@property (retain, nonatomic) NSData *imageData; // ivar: _imageData


+(BOOL)supportsSecureCoding;
+(id)imageItemContentsWithImage:(id)arg0 imageData:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif