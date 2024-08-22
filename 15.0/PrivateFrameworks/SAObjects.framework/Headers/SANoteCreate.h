// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SANOTECREATE_H
#define SANOTECREATE_H

@class NSString;


#import "SADomainCommand.h"

@interface SANoteCreate : SADomainCommand

@property (copy, nonatomic) NSString *contents;


+(id)create;
+(id)createWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif