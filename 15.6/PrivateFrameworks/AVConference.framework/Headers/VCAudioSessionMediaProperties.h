// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCAUDIOSESSIONMEDIAPROPERTIES_H
#define VCAUDIOSESSIONMEDIAPROPERTIES_H


#import <Foundation/Foundation.h>


@interface VCAudioSessionMediaProperties : NSObject

@property (nonatomic) AudioStreamBasicDescription inputFormat; // ivar: _inputFormat
@property (nonatomic) int operatingMode; // ivar: _operatingMode
@property (nonatomic) AudioStreamBasicDescription outputFormat; // ivar: _outputFormat
@property (nonatomic) CGFloat preferredBlockSize; // ivar: _preferredBlockSize
@property (nonatomic) CGFloat preferredSampleRate; // ivar: _preferredSampleRate
@property (nonatomic) int processId; // ivar: _processId
@property (nonatomic, getter=isSessionActive) BOOL sessionActive; // ivar: _sessionActive
@property (nonatomic) unsigned int vpOperatingMode; // ivar: _vpOperatingMode


-(BOOL)isEqual:(id)arg0 ;
-(id)description;


@end


#endif