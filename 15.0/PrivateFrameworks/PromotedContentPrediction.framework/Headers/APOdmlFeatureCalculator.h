// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APODMLFEATURECALCULATOR_H
#define APODMLFEATURECALCULATOR_H

@class NSURL, NSDate, NSString;

#import <Foundation/Foundation.h>

#import "APOdmlAssetManager.h"
#import "APOdmlXpcLifecycleHandler.h"

@interface APOdmlFeatureCalculator : NSObject

@property (retain, nonatomic) APOdmlAssetManager *assetManager; // ivar: _assetManager
@property (readonly, nonatomic) NSUInteger assetManagerType; // ivar: _assetManagerType
@property (retain, nonatomic) NSURL *assetPath; // ivar: _assetPath
@property (retain, nonatomic) NSDate *creationTime; // ivar: _creationTime
@property (readonly, nonatomic) NSUInteger placementType; // ivar: _placementType
@property (retain, nonatomic) APOdmlXpcLifecycleHandler *task; // ivar: _task
@property (retain, nonatomic) NSString *version; // ivar: _version


-(id)createAppUsageVectors;
-(id)initWithActivity:(id)arg0 placementType:(NSUInteger)arg1 assetManagerType:(NSUInteger)arg2 ;
-(id)initWithPlacementType:(NSUInteger)arg0 assetManagerType:(NSUInteger)arg1 ;


@end


#endif