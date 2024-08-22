// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHENVIRONMENTDATEINTERVAL_H
#define BLSHENVIRONMENTDATEINTERVAL_H

@class NSDateInterval, NSDate;
@protocol BLSHBacklightSceneHostEnvironment;

#import <Foundation/Foundation.h>


@interface BLSHEnvironmentDateInterval : NSObject

@property (readonly, nonatomic) NSObject<BLSHBacklightSceneHostEnvironment> *environment; // ivar: _environment
@property (readonly, nonatomic) NSDateInterval *presentationInterval; // ivar: _presentationInterval
@property (readonly, nonatomic) NSDate *previousPresentationDate; // ivar: _previousPresentationDate
@property (readonly, nonatomic) BOOL shouldReset; // ivar: _shouldReset


+(id)intervalWithPresentationInterval:(id)arg0 previousPresentationDate:(id)arg1 shouldReset:(BOOL)arg2 environment:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithPresentationInterval:(id)arg0 previousPresentationDate:(id)arg1 shouldReset:(BOOL)arg2 environment:(id)arg3 ;


@end


#endif