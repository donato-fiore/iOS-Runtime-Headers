// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BLASTDOORLPVIDEOATTACHMENTSUBSTITUTE_H
#define _BLASTDOORLPVIDEOATTACHMENTSUBSTITUTE_H

@class BlastDoorLPVideo;
@protocol NSSecureCoding;



@interface _BlastDoorLPVideoAttachmentSubstitute : BlastDoorLPVideo <NSSecureCoding>



@property (nonatomic) NSUInteger index; // ivar: _index


+(BOOL)supportsSecureCoding;
-(BOOL)_shouldEncodeData;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVideo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif