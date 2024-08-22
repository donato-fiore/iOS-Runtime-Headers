// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BLASTDOORLPAUDIO_H
#define _BLASTDOORLPAUDIO_H

@class NSString, NSData, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_BlastDoorLPAudioProperties.h"

@interface _BlastDoorLPAudio : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *MIMEType; // ivar: _MIMEType
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (copy, nonatomic) _BlastDoorLPAudioProperties *properties; // ivar: _properties
@property (retain, nonatomic) NSURL *streamingURL; // ivar: _streamingURL


+(BOOL)supportsSecureCoding;
-(BOOL)_shouldEncodeData;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_encodedSize;
-(id)_initWithAudio:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif