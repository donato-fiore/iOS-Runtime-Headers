// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMOVIEV2MOVIECONTEXTOBJECT_H
#define SAMOVIEV2MOVIECONTEXTOBJECT_H

@class NSString;


#import "SADomainObject.h"

@interface SAMovieV2MovieContextObject : SADomainObject

@property (copy, nonatomic) NSString *movieName;


+(id)movieContextObject;
+(id)movieContextObjectWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif