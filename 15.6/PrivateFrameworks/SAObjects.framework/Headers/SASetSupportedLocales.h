// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASETSUPPORTEDLOCALES_H
#define SASETSUPPORTEDLOCALES_H

@class NSArray;


#import "SABaseClientBoundCommand.h"

@interface SASetSupportedLocales : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *locales;


+(id)setSupportedLocales;
+(id)setSupportedLocalesWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif