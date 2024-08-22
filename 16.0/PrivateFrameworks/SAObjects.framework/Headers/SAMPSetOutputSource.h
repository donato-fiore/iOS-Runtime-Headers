// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAMPSETOUTPUTSOURCE_H
#define SAMPSETOUTPUTSOURCE_H

@class NSURL;


#import "SADomainCommand.h"

@interface SAMPSetOutputSource : SADomainCommand

@property (copy, nonatomic) NSURL *outputSourceId;


+(id)setOutputSource;
+(id)setOutputSourceWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif