// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCHAPTICSYNTHETICCOMMAND_H
#define _GCHAPTICSYNTHETICCOMMAND_H


#import <Foundation/Foundation.h>

#import "_GCHapticParameterCurve.h"
#import "_GCHapticTokenAndParams.h"

@interface _GCHapticSyntheticCommand : NSObject {
    unsigned short _type;
    CGFloat _time;
    NSUInteger _channelOrSeqID;
    NSUInteger _identifier;
}


@property (readonly, nonatomic) NSUInteger channelID;
@property (readonly, nonatomic) unsigned short command;
@property (readonly, nonatomic) NSUInteger eventID;
@property (readonly, nonatomic) NSUInteger paramID;
@property (readonly, nonatomic) _GCHapticParameterCurve *parameterCurve; // ivar: _parameterCurve
@property (readonly, nonatomic) NSUInteger sequenceID;
@property (readonly, nonatomic) NSUInteger serverID; // ivar: _serverID
@property (readonly, nonatomic) CGFloat time;
@property (readonly, nonatomic) _GCHapticTokenAndParams *tokenAndParams; // ivar: _tokenAndParams
@property (readonly, nonatomic) unsigned short type;
@property (readonly, nonatomic) float value; // ivar: _value


-(id)description;
-(id)initWithHapticCommand:(*void)arg0 ;
-(void)cancel;
-(void)preprocessCommand:(*void)arg0 ;


@end


#endif