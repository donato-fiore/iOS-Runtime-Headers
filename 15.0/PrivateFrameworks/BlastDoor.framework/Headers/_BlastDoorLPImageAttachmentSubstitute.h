// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BLASTDOORLPIMAGEATTACHMENTSUBSTITUTE_H
#define _BLASTDOORLPIMAGEATTACHMENTSUBSTITUTE_H

@class BlastDoorLPImage;
@protocol NSSecureCoding;



@interface _BlastDoorLPImageAttachmentSubstitute : BlastDoorLPImage <NSSecureCoding>



@property (nonatomic) NSUInteger index; // ivar: _index


+(BOOL)supportsSecureCoding;
-(BOOL)_shouldEncodeData;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImage:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif