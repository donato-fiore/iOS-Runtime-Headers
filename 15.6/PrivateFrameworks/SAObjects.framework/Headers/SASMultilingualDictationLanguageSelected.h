// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASMULTILINGUALDICTATIONLANGUAGESELECTED_H
#define SASMULTILINGUALDICTATIONLANGUAGESELECTED_H

@class NSString, NSDictionary;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SASMultilingualDictationLanguageSelected : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSDictionary *confidenceScoresByLanguage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *languageDetected;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)multilingualDictationLanguageSelected;
+(id)multilingualDictationLanguageSelectedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif