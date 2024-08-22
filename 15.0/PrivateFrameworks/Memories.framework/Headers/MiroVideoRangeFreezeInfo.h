// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROVIDEORANGEFREEZEINFO_H
#define MIROVIDEORANGEFREEZEINFO_H



#import "MiroFreezeInfo.h"

@interface MiroVideoRangeFreezeInfo : MiroFreezeInfo

@property (nonatomic) BOOL added; // ivar: _added
@property (nonatomic) float dimmedGain; // ivar: _dimmedGain
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) float gain;
@property (nonatomic) NSUInteger mute; // ivar: _mute
@property (nonatomic) float normalGain; // ivar: _normalGain
@property (nonatomic) BOOL removed; // ivar: _removed
@property (nonatomic) CGFloat start; // ivar: _start
@property (nonatomic) BOOL trimmed; // ivar: _trimmed
@property (nonatomic) BOOL used; // ivar: _used
@property (nonatomic) BOOL userModified; // ivar: _userModified


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataRepresentation;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg0 ;


@end


#endif