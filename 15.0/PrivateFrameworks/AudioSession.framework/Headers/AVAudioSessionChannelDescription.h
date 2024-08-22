// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVAUDIOSESSIONCHANNELDESCRIPTION_H
#define AVAUDIOSESSIONCHANNELDESCRIPTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AVAudioSessionChannelDescription : NSObject {
    *void _impl;
}


@property (readonly, nonatomic) unsigned int channelLabel;
@property (readonly, nonatomic) NSString *channelName;
@property (readonly, nonatomic) NSUInteger channelNumber;
@property (readonly, nonatomic) NSString *owningPortUID;


+(id)privateCreate:(id)arg0 portUID:(id)arg1 channelNumber:(unsigned int)arg2 ;
+(id)privateCreateArray:(id)arg0 portUID:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToChannel:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(struct ChannelDescriptionImpl *)privateGetImplementation;
-(void)dealloc;


@end


#endif