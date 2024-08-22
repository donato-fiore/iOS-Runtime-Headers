// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVAUDIOSEMANTICS_H
#define AVAUDIOSEMANTICS_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AVAudioSemantics : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *channelGroups; // ivar: _channelGroups


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithAudioSemantics:(struct __CFArray *)arg0 ;
-(id)initWithChannelGroups:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif