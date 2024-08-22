// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASTRATINGITEM_H
#define SASTRATINGITEM_H

@class NSString;
@protocol SASTTemplateItem;


#import "AceObject.h"
#import "SASTTemplateRating.h"

@interface SASTRatingItem : AceObject <SASTTemplateItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SASTTemplateRating *rating;
@property (readonly) Class superclass;


+(id)ratingItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif