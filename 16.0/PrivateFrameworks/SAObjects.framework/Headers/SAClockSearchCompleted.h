// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SACLOCKSEARCHCOMPLETED_H
#define SACLOCKSEARCHCOMPLETED_H

@class NSString, NSArray;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SAClockSearchCompleted : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSArray *results;
@property (readonly) Class superclass;


+(id)searchCompleted;
+(id)searchCompletedWithDictionary:(id)arg0 context:(id)arg1 ;
+(id)searchCompletedWithResults:(id)arg0 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;
-(id)initWithResults:(id)arg0 ;


@end


#endif