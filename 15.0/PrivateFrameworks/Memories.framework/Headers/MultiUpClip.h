// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MULTIUPCLIP_H
#define MULTIUPCLIP_H

@class NSArray, NSString, PVEffect, NSMutableDictionary;
@protocol CompoundClipInformation;


#import "MovieClip.h"

@interface MultiUpClip : MovieClip <CompoundClipInformation>



@property (retain, nonatomic) NSArray *containedClips; // ivar: _containedClips
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PVEffect *multiUpEffect; // ivar: _multiUpEffect
@property (retain, nonatomic) NSMutableDictionary *multiUpEffectSettings; // ivar: _multiUpEffectSettings
@property (retain, nonatomic) NSString *sequentialEffectID; // ivar: _sequentialEffectID
@property (readonly) Class superclass;
@property (nonatomic) int type; // ivar: _type


-(BOOL)expandsEditList;
-(BOOL)isMultiUp;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithClip:(id)arg0 ;
-(id)movie;
-(id)plistRepresentationFromProject:(id)arg0 ;
-(id)speedRanges;
-(int)maxDuration;
-(void)setContentsFromPlist:(id)arg0 inProject:(id)arg1 ;
-(void)setDuration:(int)arg0 ;
-(void)setStartOffset:(int)arg0 ;
-(void)validateEffectRange:(struct ? )arg0 inProject:(id)arg1 ;


@end


#endif