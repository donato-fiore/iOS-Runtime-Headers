// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNRECORDINGEVENT_H
#define KNRECORDINGEVENT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface KNRecordingEvent : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL canPrecedeDiscontinuity;
@property (readonly, nonatomic, getter=isIgnoredWhenSeeking) BOOL ignoredWhenSeeking;
@property (readonly, nonatomic) CGFloat startTime; // ivar: _startTime


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithMessage:(*void)arg0 unarchiver:(id)arg1 parentEventTrack:(id)arg2 ;
-(id)initWithStartTime:(CGFloat)arg0 ;
-(id)recordingEventByAddingTimeOffset:(CGFloat)arg0 ;
-(void)loadFromMessage:(*void)arg0 unarchiver:(id)arg1 parentEventTrack:(id)arg2 ;
-(void)saveToMessage:(*void)arg0 archiver:(id)arg1 ;


@end


#endif