// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAGKLINKEDANSWER_H
#define SAGKLINKEDANSWER_H

@class NSString, NSURL, NSArray;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SAUIAppPunchOut.h"

@interface SAGKLinkedAnswer : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *displayLink;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSURL *link;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SAUIAppPunchOut *punchOut;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSURL *searchUri;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *thumbnails;


+(id)linkedAnswerWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif