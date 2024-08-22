// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMACFILESYSTEMCONTEXT_H
#define SAMACFILESYSTEMCONTEXT_H

@class NSArray;


#import "SADomainObject.h"

@interface SAMacFilesystemContext : SADomainObject

@property (copy, nonatomic) NSArray *targetEntities;


+(id)filesystemContext;
+(id)filesystemContextWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif