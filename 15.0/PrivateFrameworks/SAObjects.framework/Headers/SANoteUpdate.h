// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SANOTEUPDATE_H
#define SANOTEUPDATE_H

@class NSString, NSURL;


#import "SADomainCommand.h"

@interface SANoteUpdate : SADomainCommand

@property (copy, nonatomic) NSString *contentsToAppend;
@property (copy, nonatomic) NSURL *identifier;


+(id)update;
+(id)updateWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif