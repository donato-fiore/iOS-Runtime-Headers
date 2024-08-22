// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHENVIRONMENTDATESENUMERATOR_H
#define BLSHENVIRONMENTDATESENUMERATOR_H

@class NSDateInterval, NSEnumerator, BLSAlwaysOnDateSpecifier;
@protocol BLSHBacklightSceneHostEnvironment;

#import <Foundation/Foundation.h>

#import "BLSHEnvironmentDatesModel.h"

@interface BLSHEnvironmentDatesEnumerator : NSObject

@property (readonly, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, nonatomic) NSEnumerator *enumerator; // ivar: _enumerator
@property (readonly, nonatomic) NSObject<BLSHBacklightSceneHostEnvironment> *environment; // ivar: _environment
@property (readonly, nonatomic) BLSHEnvironmentDatesModel *sourceModel; // ivar: _sourceModel
@property (retain, nonatomic) BLSAlwaysOnDateSpecifier *specifier; // ivar: _specifier


+(id)createWithInitialSpecifier:(id)arg0 enumerator:(id)arg1 dateInterval:(id)arg2 environment:(id)arg3 sourceModel:(id)arg4 ;


@end


#endif