// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASTUSERREVIEWITEM_H
#define SASTUSERREVIEWITEM_H

@class NSString;
@protocol SASTTemplateItem;


#import "AceObject.h"
#import "SAUIDecoratedText.h"

@interface SASTUserReviewItem : AceObject <SASTTemplateItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAUIDecoratedText *reviewDate;
@property (retain, nonatomic) SAUIDecoratedText *reviewText;
@property (retain, nonatomic) SAUIDecoratedText *reviewer;
@property (readonly) Class superclass;


+(id)userReviewItem;
+(id)userReviewItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif