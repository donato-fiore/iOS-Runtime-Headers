// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASTMOVIESTATITEM_H
#define SASTMOVIESTATITEM_H

@class NSString;
@protocol SASTTemplateItem;


#import "AceObject.h"
#import "SASTTemplatePercentageRating.h"

@interface SASTMovieStatItem : AceObject <SASTTemplateItem>



@property (copy, nonatomic) NSString *contentRating;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SASTTemplatePercentageRating *reviewerRating;
@property (readonly) Class superclass;


+(id)movieStatItem;
+(id)movieStatItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif