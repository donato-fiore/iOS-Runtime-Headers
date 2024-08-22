// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUPDATEREADINGSTATE_H
#define SAUPDATEREADINGSTATE_H

@class NSString, NSArray;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SAUpdateReadingState : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *readingStateId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger updatedGroupIndex;
@property (nonatomic) NSInteger updatedItemIndex;


+(id)updateReadingState;
+(id)updateReadingStateWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif