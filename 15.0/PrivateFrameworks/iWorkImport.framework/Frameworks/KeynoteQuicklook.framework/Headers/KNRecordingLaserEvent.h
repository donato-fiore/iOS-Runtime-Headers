// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KNRECORDINGLASEREVENT_H
#define KNRECORDINGLASEREVENT_H



#import "KNRecordingEvent.h"

@interface KNRecordingLaserEvent : KNRecordingEvent

@property (readonly, nonatomic) CGPoint unitLocation; // ivar: _unitLocation


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithStartTime:(CGFloat)arg0 unitLocation:(struct CGPoint )arg1 ;
-(void)loadFromMessage:(*void)arg0 unarchiver:(id)arg1 parentEventTrack:(id)arg2 ;
-(void)saveToMessage:(*void)arg0 archiver:(id)arg1 ;


@end


#endif