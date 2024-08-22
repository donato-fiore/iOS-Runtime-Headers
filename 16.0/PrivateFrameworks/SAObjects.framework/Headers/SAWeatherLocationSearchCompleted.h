// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAWEATHERLOCATIONSEARCHCOMPLETED_H
#define SAWEATHERLOCATIONSEARCHCOMPLETED_H

@class NSString, NSArray;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SAWeatherLocationSearchCompleted : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *weatherLocations;


+(id)locationSearchCompleted;
+(id)locationSearchCompletedWithDictionary:(id)arg0 context:(id)arg1 ;
+(id)locationSearchCompletedWithWeatherLocations:(id)arg0 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;
-(id)initWithWeatherLocations:(id)arg0 ;


@end


#endif