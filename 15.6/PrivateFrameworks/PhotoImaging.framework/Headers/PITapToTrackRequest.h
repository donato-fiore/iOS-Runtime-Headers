// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PITAPTOTRACKREQUEST_H
#define PITAPTOTRACKREQUEST_H

@class NURenderRequest;



@interface PITapToTrackRequest : NURenderRequest

@property (nonatomic) CGPoint normalizedImagePoint; // ivar: _normalizedImagePoint
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (nonatomic) ? startTime; // ivar: _startTime


-(NSInteger)mediaComponentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithComposition:(id)arg0 startTime:(struct ? )arg1 pointToTrack:(struct CGPoint )arg2 ;
-(id)newRenderJob;
-(void)submit:(id)arg0 ;


@end


#endif