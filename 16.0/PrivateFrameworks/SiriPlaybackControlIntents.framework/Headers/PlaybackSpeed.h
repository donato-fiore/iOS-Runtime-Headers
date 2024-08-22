// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLAYBACKSPEED_H
#define PLAYBACKSPEED_H

@class INObject;



@interface PlaybackSpeed : INObject

@property (nonatomic) NSInteger playbackSpeedType;
@property (nonatomic) CGFloat speedMagnitude;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif