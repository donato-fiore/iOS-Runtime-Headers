// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMEDIASTREAMMULTIWAYCONFIGVIDEO_H
#define VCMEDIASTREAMMULTIWAYCONFIGVIDEO_H

@class NSSet, NSArray;


#import "VCMediaStreamMultiwayConfig.h"

@interface VCMediaStreamMultiwayConfigVideo : VCMediaStreamMultiwayConfig

@property (nonatomic) unsigned int framerate; // ivar: _framerate
@property (nonatomic) BOOL isSubStream; // ivar: _isSubStream
@property (nonatomic) BOOL isTemporalStream; // ivar: _isTemporalStream
@property (nonatomic) NSUInteger keyFrameInterval; // ivar: _keyFrameInterval
@property (nonatomic) unsigned short parentStreamID; // ivar: _parentStreamID
@property (readonly, nonatomic) NSSet *payloads; // ivar: _payloads
@property (nonatomic) NSInteger resolution; // ivar: _resolution
@property (readonly, nonatomic) NSArray *subStreamConfigs; // ivar: _subStreamConfigs


-(id)init;
-(id)streamIds;
-(void)addPayload:(int)arg0 ;
-(void)addSubStreamConfig:(id)arg0 ;
-(void)dealloc;


@end


#endif