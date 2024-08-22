// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAGUIDANCECHECKFORGUIDEUPDATES_H
#define SAGUIDANCECHECKFORGUIDEUPDATES_H

@class NSString, NSNumber, NSArray;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SAGuidanceCheckForGuideUpdates : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSNumber *currentGuideTag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *supportedFeatures;


+(id)checkForGuideUpdates;
+(id)checkForGuideUpdatesWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif