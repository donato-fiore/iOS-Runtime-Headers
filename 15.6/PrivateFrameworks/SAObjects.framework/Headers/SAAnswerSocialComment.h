// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAANSWERSOCIALCOMMENT_H
#define SAANSWERSOCIALCOMMENT_H

@class NSString, NSDate;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAAnswerSocialComment : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;


+(id)socialComment;
+(id)socialCommentWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif