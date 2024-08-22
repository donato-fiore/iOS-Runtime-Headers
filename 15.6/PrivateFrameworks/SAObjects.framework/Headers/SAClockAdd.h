// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SACLOCKADD_H
#define SACLOCKADD_H



#import "SADomainCommand.h"
#import "SAClockObject.h"

@interface SAClockAdd : SADomainCommand

@property (retain, nonatomic) SAClockObject *clockToAdd;


+(id)add;
+(id)addWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif