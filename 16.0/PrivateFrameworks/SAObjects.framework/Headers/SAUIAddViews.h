// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUIADDVIEWS_H
#define SAUIADDVIEWS_H

@class NSString, NSArray;
@protocol SAConditionallyMutatingClientBoundCommand;


#import "SABaseClientBoundCommand.h"
#import "SASendCommands.h"

@interface SAUIAddViews : SABaseClientBoundCommand <SAConditionallyMutatingClientBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *dialogPhase;
@property (copy, nonatomic) NSString *displayTarget;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL immersiveExperience;
@property (nonatomic) BOOL mutatingCommand;
@property (copy, nonatomic) NSString *patternId;
@property (copy, nonatomic) NSString *patternType;
@property (copy, nonatomic) NSString *refId;
@property (retain, nonatomic) SASendCommands *refreshCommand;
@property (nonatomic) BOOL requiresResponse;
@property (copy, nonatomic) NSString *responseMode;
@property (nonatomic) BOOL scrollToTop;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supplemental;
@property (nonatomic) BOOL temporary;
@property (copy, nonatomic) NSArray *views;


+(id)addViews;
+(id)addViewsWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif