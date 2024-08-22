// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVAUDIOCHANNELLAYOUT_H
#define AVAUDIOCHANNELLAYOUT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AVAudioChannelLayout : NSObject <NSSecureCoding>

 {
    unsigned int _layoutTag;
    *AudioChannelLayout _layout;
    *void _reserved;
}


@property (readonly, nonatomic) unsigned int channelCount;
@property (readonly, nonatomic) *AudioChannelLayout layout;
@property (readonly, nonatomic) unsigned int layoutTag;


+(BOOL)supportsSecureCoding;
+(id)layoutWithLayout:(struct AudioChannelLayout *)arg0 ;
+(id)layoutWithLayoutTag:(unsigned int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLayout:(struct AudioChannelLayout *)arg0 ;
-(id)initWithLayoutTag:(unsigned int)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif