// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHENVIRONMENTDATESMODEL_H
#define BLSHENVIRONMENTDATESMODEL_H

@class NSMutableArray, NSDateInterval, NSArray;
@protocol BLSHBacklightSceneHostEnvironment;

#import <Foundation/Foundation.h>


@interface BLSHEnvironmentDatesModel : NSObject {
    NSMutableArray *_specifiers;
    NSDateInterval *_dateInterval;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSInteger count;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, weak, nonatomic) NSObject<BLSHBacklightSceneHostEnvironment> *environment; // ivar: _environment
@property (readonly, copy, nonatomic) NSArray *specifiers;


-(id)initWithEnvironment:(id)arg0 ;
-(id)missingIntervalForDateInterval:(id)arg0 ;
-(id)specifierForDate:(id)arg0 ;
-(void)clearAllSpecifiers;
-(void)purgeSpecifiersBefore:(id)arg0 ;
-(void)registerSpecifiers:(id)arg0 forDateInterval:(id)arg1 ;


@end


#endif