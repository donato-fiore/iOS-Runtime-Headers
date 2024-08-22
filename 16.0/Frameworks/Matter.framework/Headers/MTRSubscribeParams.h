// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRSUBSCRIBEPARAMS_H
#define MTRSUBSCRIBEPARAMS_H

@class NSNumber;


#import "MTRReadParams.h"

@interface MTRSubscribeParams : MTRReadParams

@property (retain, nonatomic) NSNumber *autoResubscribe; // ivar: _autoResubscribe
@property (retain, nonatomic) NSNumber *keepPreviousSubscriptions; // ivar: _keepPreviousSubscriptions


-(id)init;


@end


#endif