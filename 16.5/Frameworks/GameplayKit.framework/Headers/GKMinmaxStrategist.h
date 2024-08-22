// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKMINMAXSTRATEGIST_H
#define GKMINMAXSTRATEGIST_H

@class NSString;
@protocol GKStrategist, GKGameModel, GKRandom;

#import <Foundation/Foundation.h>


@interface GKMinmaxStrategist : NSObject <GKStrategist>

 {
    *void _cppMinmax;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<GKGameModel> *gameModel;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger maxLookAheadDepth;
@property (retain, nonatomic) NSObject<GKRandom> *randomSource;
@property (readonly) Class superclass;


-(id)bestMoveForActivePlayer;
-(id)bestMoveForPlayer:(id)arg0 ;
-(id)init;
-(id)randomMoveForPlayer:(id)arg0 fromNumberOfBestMoves:(NSInteger)arg1 ;
-(void)dealloc;


@end


#endif