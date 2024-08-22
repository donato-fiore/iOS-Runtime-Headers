// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SACALENDAREVENTSEARCHCOMPLETED_H
#define SACALENDAREVENTSEARCHCOMPLETED_H

@class NSString, NSArray;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SACalendarEventSearchCompleted : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSArray *results;
@property (readonly) Class superclass;


+(id)eventSearchCompleted;
+(id)eventSearchCompletedWithDictionary:(id)arg0 context:(id)arg1 ;
+(id)eventSearchCompletedWithResults:(id)arg0 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;
-(id)initWithResults:(id)arg0 ;


@end


#endif