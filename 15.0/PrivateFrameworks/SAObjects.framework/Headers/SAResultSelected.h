// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SARESULTSELECTED_H
#define SARESULTSELECTED_H

@class NSString, NSNumber;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SAResultSelected : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *processedAudioDuration;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSString *resultId;
@property (readonly) Class superclass;


+(id)resultSelected;
+(id)resultSelectedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif