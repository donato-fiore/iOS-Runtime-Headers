// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCONTEXTUALMEMORIESSETTINGS_H
#define PXCONTEXTUALMEMORIESSETTINGS_H

@class NSDate, NSDictionary, CLLocation, NSArray;

#import <Foundation/Foundation.h>

#import "PXContextualMemoriesLocationSetting.h"
#import "PXContextualMemoriesPeopleSetting.h"
#import "PXContextualMemoriesTimeSetting.h"

@interface PXContextualMemoriesSettings : NSObject

@property (readonly, nonatomic) NSDate *date;
@property (copy, nonatomic) NSDictionary *extraParameters; // ivar: _extraParameters
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) PXContextualMemoriesLocationSetting *locationSetting; // ivar: _locationSetting
@property (readonly, nonatomic) NSArray *peopleNames;
@property (readonly, nonatomic) PXContextualMemoriesPeopleSetting *peopleSetting; // ivar: _peopleSetting
@property (readonly, nonatomic) NSArray *settings; // ivar: _settings
@property (readonly, nonatomic) PXContextualMemoriesTimeSetting *timeSetting; // ivar: _timeSetting


-(id)init;


@end


#endif