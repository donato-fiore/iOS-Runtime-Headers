// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMIDIEVENT_H
#define AXMIDIEVENT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXMIDIEvent : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) unsigned short channel; // ivar: _channel
@property (nonatomic) unsigned char control; // ivar: _control
@property (nonatomic) unsigned char controlValue; // ivar: _controlValue
@property (readonly, nonatomic, getter=isDownEvent) BOOL downEvent;
@property (nonatomic) unsigned char note; // ivar: _note
@property (readonly, nonatomic) unsigned char noteOctave;
@property (readonly, nonatomic) NSInteger noteValue;
@property (readonly, nonatomic, getter=isOmniChannel) BOOL omniChannel;
@property (readonly, nonatomic) NSInteger ordinalChannel;
@property (nonatomic) unsigned short pitchBend; // ivar: _pitchBend
@property (nonatomic) unsigned char pressure; // ivar: _pressure
@property (nonatomic) unsigned char program; // ivar: _program
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif