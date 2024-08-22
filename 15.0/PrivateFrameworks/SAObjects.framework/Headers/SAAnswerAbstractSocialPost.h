// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAANSWERABSTRACTSOCIALPOST_H
#define SAANSWERABSTRACTSOCIALPOST_H

@class NSString, NSArray, NSDate, NSURL;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAAnswerAbstractSocialPost : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *authorTitle;
@property (copy, nonatomic) NSArray *comments;
@property (copy, nonatomic) NSDate *dateCreated;
@property (copy, nonatomic) NSDate *dateModified;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSURL *icon;
@property (nonatomic) NSInteger rank;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *title;


+(id)abstractSocialPost;
+(id)abstractSocialPostWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif