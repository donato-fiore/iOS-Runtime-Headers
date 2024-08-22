// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUILISTENFORPRONUNCIATIONCOMPLETED_H
#define SAUILISTENFORPRONUNCIATIONCOMPLETED_H

@class NSString, NSNumber;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"
#import "SASPronunciationData.h"

@interface SAUIListenForPronunciationCompleted : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *errorCode;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *interactionId;
@property (retain, nonatomic) SASPronunciationData *pronunciationData;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)listenForPronunciationCompleted;
+(id)listenForPronunciationCompletedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif