// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASTTEMPLATEPERCENTAGERATING_H
#define SASTTEMPLATEPERCENTAGERATING_H



#import "SASTTemplateRating.h"
#import "SAUILocalImageResource.h"
#import "SAUIDecoratedText.h"

@interface SASTTemplatePercentageRating : SASTTemplateRating

@property (retain, nonatomic) SAUILocalImageResource *localImageResource;
@property (retain, nonatomic) SAUIDecoratedText *value;


+(id)templatePercentageRating;
+(id)templatePercentageRatingWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif