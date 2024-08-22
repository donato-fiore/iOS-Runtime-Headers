// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASVDIALOGACT_H
#define SASVDIALOGACT_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SASVDialogNode.h"

@interface SASVDialogAct : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SASVDialogNode *parametersRoot;
@property (readonly) Class superclass;


+(id)dialogAct;
+(id)dialogActWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif