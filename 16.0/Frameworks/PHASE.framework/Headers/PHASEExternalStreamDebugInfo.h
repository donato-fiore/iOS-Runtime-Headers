// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASEEXTERNALSTREAMDEBUGINFO_H
#define PHASEEXTERNALSTREAMDEBUGINFO_H

@class AVAudioFormat;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PHASEExternalStreamDebugInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) AVAudioFormat *clientFormat; // ivar: _clientFormat
@property (readonly, nonatomic, getter=isInput) BOOL input; // ivar: _input
@property (readonly, nonatomic, getter=isStreamPaused) BOOL streamPaused; // ivar: _streamPaused


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif