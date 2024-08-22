// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SADIALOGINFLECTWORDRESPONSE_H
#define SADIALOGINFLECTWORDRESPONSE_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SADialogInflectWordResponse : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *print;
@property (copy, nonatomic) NSString *speak;


+(id)inflectWordResponse;
+(id)inflectWordResponseWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif