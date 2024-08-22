// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKWORLDCLOCKMANAGER_H
#define NTKWORLDCLOCKMANAGER_H

@class WorldClockManager, NSArray;

#import <Foundation/Foundation.h>


@interface NTKWorldClockManager : NSObject {
    WorldClockManager *_frameworkManager;
    os_unfair_lock_s _frameworkLock;
}


@property (readonly, nonatomic) NSArray *cities;


+(id)sharedManager;
-(BOOL)canAddCity;
-(BOOL)checkIfCitiesModified;
-(NSUInteger)addCity:(id)arg0 ;
-(id)init;
-(void)loadCities;
-(void)saveCities;


@end


#endif