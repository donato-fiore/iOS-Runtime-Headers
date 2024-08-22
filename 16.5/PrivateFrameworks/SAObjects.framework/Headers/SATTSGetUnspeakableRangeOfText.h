// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SATTSGETUNSPEAKABLERANGEOFTEXT_H
#define SATTSGETUNSPEAKABLERANGEOFTEXT_H

@class NSString, NSArray;


#import "SABaseClientBoundCommand.h"

@interface SATTSGetUnspeakableRangeOfText : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSArray *texts;


+(id)getUnspeakableRangeOfText;
+(id)getUnspeakableRangeOfTextWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif