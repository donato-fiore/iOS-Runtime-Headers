// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IPAVIDEOPLAYBACKSETTINGS_H
#define IPAVIDEOPLAYBACKSETTINGS_H



#import "IPAEditDescription.h"

@interface IPAVideoPlaybackSettings : IPAEditDescription

@property (readonly, nonatomic) ? naturalDuration; // ivar: _naturalDuration


+(Class)expectedOperationClass;
+(Class)operationClassForIdentifier:(id)arg0 ;
+(id)playbackSettingsForAdjustments:(id)arg0 ;
+(id)presetifyAdjustmentStack:(id)arg0 ;
+(void)initialize;
-(BOOL)isEqualToDescription:(id)arg0 ;
-(NSUInteger)sortOrderForOperationWithIdentifier:(id)arg0 ;
-(id)archivalRepresentation;
-(id)debugDescription;
-(id)descriptionByAddingOperation:(id)arg0 ;
-(id)descriptionByAddingOperation:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)descriptionByInsertingOrReplacingOperation:(id)arg0 ;
-(id)descriptionByReplacingOperation:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)descriptionWithOperations:(id)arg0 ;
-(id)initWithOperations:(id)arg0 ;
-(id)initWithOperations:(id)arg0 naturalDuration:(struct ? )arg1 ;
-(id)operationWithIdentifier:(id)arg0 ;
-(id)posterFrameOperation;
-(id)slomoOperation;
-(id)trimOperation;
-(struct ? )naturalPlaybackRange;
-(struct ? )naturalTimeForPosterFrame;
-(struct ? )naturalTimeFromScaledTime:(struct ? )arg0 ;
-(struct ? )scaledDuration;
-(struct ? )scaledPlaybackRangeForScaledDuration:(struct ? )arg0 ;
-(struct ? )scaledTimeFromNaturalTime:(struct ? )arg0 ;


@end


#endif