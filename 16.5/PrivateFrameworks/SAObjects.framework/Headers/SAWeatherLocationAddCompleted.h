// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAWEATHERLOCATIONADDCOMPLETED_H
#define SAWEATHERLOCATIONADDCOMPLETED_H

@class NSString, NSURL;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SAWeatherLocationAddCompleted : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *error;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSURL *weatherLocationId;


+(id)locationAddCompleted;
+(id)locationAddCompletedWithDictionary:(id)arg0 context:(id)arg1 ;
+(id)locationAddCompletedWithError:(id)arg0 ;
+(id)locationAddCompletedWithWeatherLocationId:(id)arg0 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;
-(id)initWithError:(id)arg0 ;
-(id)initWithWeatherLocationId:(id)arg0 ;


@end


#endif