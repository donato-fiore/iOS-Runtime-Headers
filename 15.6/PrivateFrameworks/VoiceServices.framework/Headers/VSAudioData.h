// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSAUDIODATA_H
#define VSAUDIODATA_H

@class NSData, NSMutableData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VSAudioData : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) AudioStreamBasicDescription asbd; // ivar: _asbd
@property (retain, nonatomic) NSData *audioData;
@property (retain, nonatomic) NSMutableData *mutableAudioData; // ivar: _mutableAudioData
@property (retain, nonatomic) NSMutableData *mutableDescription; // ivar: _mutableDescription
@property (nonatomic) NSInteger packetCount; // ivar: _packetCount
@property (retain, nonatomic) NSData *packetDescriptions;


+(BOOL)supportsSecureCoding;
-(CGFloat)duration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(unsigned int)totalFrames;
-(void)concatenateWithAudio:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif