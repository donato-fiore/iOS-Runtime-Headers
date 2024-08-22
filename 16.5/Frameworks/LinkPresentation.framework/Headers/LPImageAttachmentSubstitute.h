// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPIMAGEATTACHMENTSUBSTITUTE_H
#define LPIMAGEATTACHMENTSUBSTITUTE_H

@protocol NSSecureCoding;


#import "LPImage.h"

@interface LPImageAttachmentSubstitute : LPImage <NSSecureCoding>



@property (nonatomic) NSInteger index; // ivar: _index


+(BOOL)supportsSecureCoding;
-(BOOL)_isSubstitute;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImage:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif