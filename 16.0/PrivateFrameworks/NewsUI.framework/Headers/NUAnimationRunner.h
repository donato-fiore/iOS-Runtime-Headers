// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUANIMATIONRUNNER_H
#define NUANIMATIONRUNNER_H


#import <Foundation/Foundation.h>


@interface NUAnimationRunner : NSObject

@property (readonly, nonatomic) id *runBlock; // ivar: _runBlock


-(id)initWithRunBlock:(id)arg0 ;
-(void)runWithFinishBlock:(id)arg0 ;


@end


#endif