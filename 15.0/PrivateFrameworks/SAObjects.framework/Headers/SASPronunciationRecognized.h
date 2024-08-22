// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASPRONUNCIATIONRECOGNIZED_H
#define SASPRONUNCIATIONRECOGNIZED_H

@class NSNumber, NSString;


#import "SABaseClientBoundCommand.h"
#import "SASPronunciationData.h"

@interface SASPronunciationRecognized : SABaseClientBoundCommand

@property (copy, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *interactionId;
@property (retain, nonatomic) SASPronunciationData *pronunciationData;


+(id)pronunciationRecognized;
+(id)pronunciationRecognizedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif