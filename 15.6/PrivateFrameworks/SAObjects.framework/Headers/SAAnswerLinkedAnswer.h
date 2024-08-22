// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAANSWERLINKEDANSWER_H
#define SAANSWERLINKEDANSWER_H

@class NSString, NSURL;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAAnswerLinkedAnswer : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *descriptionText;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSURL *image;
@property (copy, nonatomic) NSURL *link;
@property (copy, nonatomic) NSString *name;
@property (readonly) Class superclass;


+(id)linkedAnswerWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif