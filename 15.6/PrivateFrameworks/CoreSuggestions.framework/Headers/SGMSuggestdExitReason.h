// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGMSUGGESTDEXITREASON_H
#define SGMSUGGESTDEXITREASON_H

@class PETScalarEventTracker;

#import <Foundation/Foundation.h>


@interface SGMSuggestdExitReason : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker; // ivar: _tracker


-(id)init;
-(void)trackEventWithScalar:(NSUInteger)arg0 exitCode:(NSUInteger)arg1 ;


@end


#endif