// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COMPOUNDCLIP_H
#define COMPOUNDCLIP_H

@class NSString;
@protocol CompoundClipInformation;


#import "KenBurnsClip.h"

@interface CompoundClip : KenBurnsClip <CompoundClipInformation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat idealPhotoDuration; // ivar: _idealPhotoDuration
@property (retain, nonatomic) KenBurnsClip *kenBurnsClip; // ivar: _kenBurnsClip
@property (nonatomic) CGFloat maximumPhotoDuration; // ivar: _maximumPhotoDuration
@property (nonatomic) CGFloat minimumPhotoDuration; // ivar: _minimumPhotoDuration
@property (readonly) Class superclass;


-(BOOL)expandsEditList;
-(id)addTransitionsWithName:(id)arg0 transitionDuration:(int)arg1 betweenClips:(id)arg2 ;
-(id)addTransitionsWithName:(id)arg0 transitionDuration:(int)arg1 transitionEffectProperties:(id)arg2 betweenClips:(id)arg3 ;
-(id)containedClips;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithKenBurnsClip:(id)arg0 ;
-(void)takePropertiesFromKenBurnsClip:(id)arg0 ;
-(void)turnOffKenBurnsForClips:(id)arg0 ;


@end


#endif