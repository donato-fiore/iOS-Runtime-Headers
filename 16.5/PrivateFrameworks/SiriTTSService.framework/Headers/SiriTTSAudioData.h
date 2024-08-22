// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRITTSAUDIODATA_H
#define SIRITTSAUDIODATA_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SiriTTSAudioData : NSObject <NSSecureCoding>

 {
    ? audioData;
    ? packetDescriptions;
}


@property (nonatomic) AudioStreamBasicDescription asbd; // ivar: asbd
@property (nonatomic, copy) NSData *audioData;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) NSInteger packetCount; // ivar: packetCount
@property (nonatomic, copy) NSData *packetDescriptions;


+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif