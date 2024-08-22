// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BLASTDOORLPVIDEO_H
#define _BLASTDOORLPVIDEO_H

@class NSString, NSData, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_BlastDoorLPVideoProperties.h"

@interface _BlastDoorLPVideo : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *MIMEType; // ivar: _MIMEType
@property (copy, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (nonatomic) BOOL hasAudio; // ivar: _hasAudio
@property (copy, nonatomic) _BlastDoorLPVideoProperties *properties; // ivar: _properties
@property (retain, nonatomic) NSURL *streamingURL; // ivar: _streamingURL
@property (retain, nonatomic) NSURL *youTubeURL; // ivar: _youTubeURL


+(BOOL)supportsSecureCoding;
-(BOOL)_shouldEncodeData;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_encodedSize;
-(id)_initWithVideo:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif