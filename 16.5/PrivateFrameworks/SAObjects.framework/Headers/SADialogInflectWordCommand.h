// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SADIALOGINFLECTWORDCOMMAND_H
#define SADIALOGINFLECTWORDCOMMAND_H

@class NSString, NSArray;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SADialogInflectWordCommand : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSArray *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL defaultToSemantic;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSString *semanticFeatureName;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *value;


+(id)inflectWordCommand;
+(id)inflectWordCommandWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif