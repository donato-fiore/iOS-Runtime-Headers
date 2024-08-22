// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFAUDIOSTATE_H
#define AFAUDIOSTATE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFAudioState : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) unsigned int audioSessionID; // ivar: _audioSessionID


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif