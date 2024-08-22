// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSMETRICSBATCH_H
#define AMSMETRICSBATCH_H

@class ACAccount, NSString, NSArray, NSURL;

#import <Foundation/Foundation.h>


@interface AMSMetricsBatch : NSObject

@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (nonatomic) BOOL anonymous; // ivar: _anonymous
@property (retain, nonatomic) NSString *canaryIdentifier; // ivar: _canaryIdentifier
@property (nonatomic) BOOL containsLoadURL; // ivar: _containsLoadURL
@property (retain, nonatomic) NSArray *droppedEvents; // ivar: _droppedEvents
@property (retain, nonatomic) NSArray *eventDictionaries; // ivar: _eventDictionaries
@property (retain, nonatomic) NSArray *events; // ivar: _events
@property (retain, nonatomic) NSURL *reportURL; // ivar: _reportURL
@property (retain, nonatomic) NSArray *skippedEvents; // ivar: _skippedEvents




@end


#endif