// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTSERIALIZEDAVATARRECORD_H
#define AVTSERIALIZEDAVATARRECORD_H

@protocol NSSecureCoding, NSCopying, AVTAvatarRecord;

#import <Foundation/Foundation.h>


@interface AVTSerializedAvatarRecord : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSObject<AVTAvatarRecord> *avatarRecord; // ivar: _avatarRecord
@property (nonatomic) BOOL isPuppet; // ivar: _isPuppet


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAvatarRecord:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif