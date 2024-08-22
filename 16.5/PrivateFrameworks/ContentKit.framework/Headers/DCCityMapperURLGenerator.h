// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DCCITYMAPPERURLGENERATOR_H
#define DCCITYMAPPERURLGENERATOR_H

@class NSString;


#import "DCMapsURLGenerator.h"

@interface DCCityMapperURLGenerator : DCMapsURLGenerator

@property (retain, nonatomic) NSString *endCoordinate; // ivar: _endCoordinate
@property (retain, nonatomic) NSString *startCoordinate; // ivar: _startCoordinate


+(void)generateURLWithMapsLink:(id)arg0 completionHandler:(id)arg1 ;
-(id)host;
-(id)path;
-(id)scheme;
-(void)populateQueryDictionary;


@end


#endif