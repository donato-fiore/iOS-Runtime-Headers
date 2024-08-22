// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAFMFSEARCHCOMPLETED_H
#define SAFMFSEARCHCOMPLETED_H

@class NSString, NSNumber, NSArray, NSURL;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SAFmfSearchCompleted : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSNumber *atRequestedLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *fmfLocations;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSURL *searchContext;
@property (readonly) Class superclass;


+(id)searchCompleted;
+(id)searchCompletedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif