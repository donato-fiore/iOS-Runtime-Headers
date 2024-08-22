// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAMPPLAYBACKINFO_H
#define SAMPPLAYBACKINFO_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SACalendar.h"

@interface SAMPPlaybackInfo : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger durationMillis;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SACalendar *lastPlayedDate;
@property (nonatomic) NSInteger playbackPositionMillis;
@property (nonatomic) NSInteger plays;
@property (nonatomic) BOOL rememberPlaybackPosition;
@property (readonly) Class superclass;


+(id)playbackInfo;
+(id)playbackInfoWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif