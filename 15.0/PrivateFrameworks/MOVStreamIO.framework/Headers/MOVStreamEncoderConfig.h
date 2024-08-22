// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MOVSTREAMENCODERCONFIG_H
#define MOVSTREAMENCODERCONFIG_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface MOVStreamEncoderConfig : NSObject

@property unsigned int codecType; // ivar: _codecType
@property (retain) NSDictionary *encoderSpecification; // ivar: _encoderSpecification
@property (retain) NSDictionary *sessionProperties; // ivar: _sessionProperties


+(BOOL)isEncoderAvailableOfType:(unsigned int)arg0 withId:(id)arg1 ;
+(id)encoderIdsForType:(unsigned int)arg0 ;
+(id)monochrome10BitEncoderConfigUsingAVEWithBitrate:(NSUInteger)arg0 ;
-(BOOL)applySessionProperties:(struct OpaqueVTCompressionSession *)arg0 ;
-(BOOL)writeToFile:(id)arg0 error:(*id)arg1 ;
-(id)initWithCodecType:(unsigned int)arg0 encoderSpecification:(id)arg1 sessionProperties:(id)arg2 ;
-(id)initWithContentsOfFile:(id)arg0 error:(*id)arg1 ;


@end


#endif