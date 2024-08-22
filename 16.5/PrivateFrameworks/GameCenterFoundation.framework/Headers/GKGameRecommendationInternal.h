// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKGAMERECOMMENDATIONINTERNAL_H
#define GKGAMERECOMMENDATIONINTERNAL_H

@class NSString;


#import "GKGameInternal.h"

@interface GKGameRecommendationInternal : GKGameInternal

@property (retain, nonatomic) NSString *engineID; // ivar: _engineID
@property (retain, nonatomic) NSString *reason; // ivar: _reason


+(id)secureCodedPropertyKeys;
-(id)initWithGame:(id)arg0 ;
-(id)serverRepresentation;


@end


#endif