// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEWMEDIACLIP_H
#define NEWMEDIACLIP_H

@class NSArray, NSString;
@protocol CompoundClipInformation;


#import "KenBurnsClip.h"

@interface NewMediaClip : KenBurnsClip <CompoundClipInformation>



@property (retain, nonatomic) NSArray *containedClips; // ivar: _containedClips
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)expandsEditList;
-(id)initWithKBClip:(id)arg0 ;
-(id)newMediaAssetVideoPiece;
-(int)maxDuration;
-(void)setDuration:(int)arg0 ;


@end


#endif