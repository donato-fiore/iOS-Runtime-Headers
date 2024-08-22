// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SANOTEDELETE_H
#define SANOTEDELETE_H

@class NSURL;


#import "SADomainCommand.h"

@interface SANoteDelete : SADomainCommand

@property (copy, nonatomic) NSURL *identifier;


+(id)delete;
+(id)deleteWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif