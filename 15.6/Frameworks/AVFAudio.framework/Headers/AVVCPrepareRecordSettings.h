// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVVCPREPARERECORDSETTINGS_H
#define AVVCPREPARERECORDSETTINGS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface AVVCPrepareRecordSettings : NSObject

@property (retain, nonatomic) NSDictionary *avAudioSettings; // ivar: _avAudioSettings
@property (nonatomic) BOOL meteringEnabled; // ivar: _meteringEnabled
@property (nonatomic) CGFloat recordBufferDuration; // ivar: _recordBufferDuration
@property (nonatomic) NSUInteger streamID; // ivar: _streamID


-(id)initWithStreamID:(NSUInteger)arg0 settings:(id)arg1 bufferDuration:(CGFloat)arg2 ;
-(void)dealloc;


@end


#endif