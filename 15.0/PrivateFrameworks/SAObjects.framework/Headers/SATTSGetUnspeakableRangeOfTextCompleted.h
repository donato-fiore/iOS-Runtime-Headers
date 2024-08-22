// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SATTSGETUNSPEAKABLERANGEOFTEXTCOMPLETED_H
#define SATTSGETUNSPEAKABLERANGEOFTEXTCOMPLETED_H

@class NSArray;


#import "SABaseClientBoundCommand.h"

@interface SATTSGetUnspeakableRangeOfTextCompleted : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *results;


+(id)getUnspeakableRangeOfTextCompleted;
+(id)getUnspeakableRangeOfTextCompletedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif