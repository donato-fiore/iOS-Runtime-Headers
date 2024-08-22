// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KENBURNSMOVIE_H
#define KENBURNSMOVIE_H



#import "Movie.h"

@interface KenBurnsMovie : Movie



-(BOOL)isKenBurnsMovie;
-(BOOL)titleIsLocalizable;
-(CGFloat)durationInSeconds;
-(int)duration;
-(void)resetAssetAvailability;
-(void)updateAssetAvailability;
-(void)updateLocation;


@end


#endif