// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPSUBSCRIBEPARAMS_H
#define CHIPSUBSCRIBEPARAMS_H

@class NSNumber;


#import "CHIPReadParams.h"

@interface CHIPSubscribeParams : CHIPReadParams

@property (retain, nonatomic) NSNumber *autoResubscribe; // ivar: _autoResubscribe
@property (retain, nonatomic) NSNumber *keepPreviousSubscriptions; // ivar: _keepPreviousSubscriptions


-(id)init;


@end


#endif