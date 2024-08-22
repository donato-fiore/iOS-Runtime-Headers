// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSAWEBVIDEOREP_H
#define TSAWEBVIDEOREP_H

@class TSDRep, NSString;
@protocol TSDMediaControlsHostRep, TSDPlayableRep;


#import "TSAWebVideoInfo.h"

@interface TSAWebVideoRep : TSDRep <TSDMediaControlsHostRep, TSDPlayableRep>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isPlayable) BOOL playable;
@property (readonly) Class superclass;
@property (readonly, nonatomic) TSAWebVideoInfo *webVideoInfo;


+(CGFloat)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg0 incomingObject:(id)arg1 mixingTypeContext:(id)arg2 ;
-(id)hyperlinkRegions;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(id)textureForDescription:(id)arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 ;


@end


#endif