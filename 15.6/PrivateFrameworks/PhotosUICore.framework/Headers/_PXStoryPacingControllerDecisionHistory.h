// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXSTORYPACINGCONTROLLERDECISIONHISTORY_H
#define _PXSTORYPACINGCONTROLLERDECISIONHISTORY_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface _PXStoryPacingControllerDecisionHistory : NSObject {
    NSMutableArray *_decisionHistory;
}


@property (readonly, nonatomic) ? currentError;
@property (readonly, nonatomic) NSInteger decisionCount; // ivar: _decisionCount
@property (readonly, nonatomic) NSInteger onBarCount; // ivar: _onBarCount
@property (readonly, nonatomic) CGFloat onBarPercentage; // ivar: _onBarPercentage


-(id)descriptionWithShortStyle:(BOOL)arg0 ;
-(id)init;
-(struct ? )firstPacingDecisionAfterTime:(struct ? )arg0 ;
-(void)recordDecision:(struct ? )arg0 ;
-(void)resetWithTargetDuration:(struct ? )arg0 reason:(id)arg1 ;


@end


#endif