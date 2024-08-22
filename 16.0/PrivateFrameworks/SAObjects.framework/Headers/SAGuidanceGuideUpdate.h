// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAGUIDANCEGUIDEUPDATE_H
#define SAGUIDANCEGUIDEUPDATE_H

@class NSNumber, NSString;


#import "SABaseClientBoundCommand.h"
#import "SAGuidanceGuideSnippet.h"
#import "SAGuidanceSuggestedUtterances.h"

@interface SAGuidanceGuideUpdate : SABaseClientBoundCommand

@property (retain, nonatomic) SAGuidanceGuideSnippet *guideSnippet;
@property (copy, nonatomic) NSNumber *guideTag;
@property (copy, nonatomic) NSString *languageCode;
@property (retain, nonatomic) SAGuidanceSuggestedUtterances *suggestedUtterances;


+(id)guideUpdate;
+(id)guideUpdateWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif