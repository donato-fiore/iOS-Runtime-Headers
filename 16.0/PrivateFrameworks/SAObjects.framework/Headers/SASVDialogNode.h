// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASVDIALOGNODE_H
#define SASVDIALOGNODE_H

@class NSArray, NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SASVDialogNode : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSArray *children;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *nodeTypeHint;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *value;


+(id)dialogNode;
+(id)dialogNodeWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif