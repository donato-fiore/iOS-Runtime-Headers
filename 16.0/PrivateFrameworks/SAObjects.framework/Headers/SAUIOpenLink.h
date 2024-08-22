// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUIOPENLINK_H
#define SAUIOPENLINK_H

@class NSURL;


#import "SABaseClientBoundCommand.h"

@interface SAUIOpenLink : SABaseClientBoundCommand

@property (copy, nonatomic) NSURL *ref;


+(id)openLink;
+(id)openLinkWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif