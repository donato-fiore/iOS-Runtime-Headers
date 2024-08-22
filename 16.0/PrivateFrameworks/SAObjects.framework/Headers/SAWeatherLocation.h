// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAWEATHERLOCATION_H
#define SAWEATHERLOCATION_H

@class NSString;


#import "SALocation.h"

@interface SAWeatherLocation : SALocation

@property (copy, nonatomic) NSString *locationId;


+(id)location;
+(id)locationWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif