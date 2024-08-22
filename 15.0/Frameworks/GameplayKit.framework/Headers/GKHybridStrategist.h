// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKHYBRIDSTRATEGIST_H
#define GKHYBRIDSTRATEGIST_H

@class NSString;
@protocol GKStrategist, GKGameModel, GKRandom;

#import <Foundation/Foundation.h>


@interface GKHybridStrategist : NSObject <GKStrategist>

 {
    *void _hybridStrategist;
}


@property (nonatomic) NSUInteger budget;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger explorationParameter;
@property (retain, nonatomic) NSObject<GKGameModel> *gameModel;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maxLookAheadDepth;
@property (retain, nonatomic) NSObject<GKRandom> *randomSource;
@property (readonly) Class superclass;


-(BOOL)validateGameModel:(id)arg0 ;
-(BOOL)validateRandomSource;
-(id)bestMoveForActivePlayer;
-(id)init;
-(void)dealloc;


@end


#endif