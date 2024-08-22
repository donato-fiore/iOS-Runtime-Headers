// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPVIDEOATTACHMENTSUBSTITUTE_H
#define LPVIDEOATTACHMENTSUBSTITUTE_H

@protocol NSSecureCoding;


#import "LPVideo.h"

@interface LPVideoAttachmentSubstitute : LPVideo <NSSecureCoding>



@property (nonatomic) NSInteger index; // ivar: _index


+(BOOL)supportsSecureCoding;
-(BOOL)_isSubstitute;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVideo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif