// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SARADARFILINGDIDBEGIN_H
#define SARADARFILINGDIDBEGIN_H



#import "SABaseClientBoundCommand.h"

@interface SARadarFilingDidBegin : SABaseClientBoundCommand



+(id)filingDidBegin;
+(id)filingDidBeginWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif