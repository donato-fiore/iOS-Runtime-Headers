// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SACALENDARDEFAULTSOURCEGETCOMPLETED_H
#define SACALENDARDEFAULTSOURCEGETCOMPLETED_H

@class NSString;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"
#import "SACalendarSource.h"

@interface SACalendarDefaultSourceGetCompleted : SABaseCommand <SAServerBoundCommand>



@property (retain, nonatomic) SACalendarSource *aceCalendarSource;
@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)defaultSourceGetCompleted;
+(id)defaultSourceGetCompletedWithAceCalendarSource:(id)arg0 ;
+(id)defaultSourceGetCompletedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;
-(id)initWithAceCalendarSource:(id)arg0 ;


@end


#endif