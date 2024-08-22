// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKDOMLSPARSER_H
#define IKDOMLSPARSER_H

@protocol IKJSDOMLSParser;


#import "IKJSObject.h"

@interface IKDOMLSParser : IKJSObject <IKJSDOMLSParser>



@property (readonly, getter=appendAsChildrenAction) NSInteger ACTION_APPEND_AS_CHILDREN;
@property (readonly, getter=insertAfterAction) NSInteger ACTION_INSERT_AFTER;
@property (readonly, getter=insertBeforeAction) NSInteger ACTION_INSERT_BEFORE;
@property (readonly, getter=replaceAction) NSInteger ACTION_REPLACE;
@property (readonly, getter=replaceChildrenAction) NSInteger ACTION_REPLACE_CHILDREN;


+(id)_dataFromInput:(id)arg0 ;
-(id)parse:(id)arg0 ;
-(id)parseWithContext:(id)arg0 ;


@end


#endif