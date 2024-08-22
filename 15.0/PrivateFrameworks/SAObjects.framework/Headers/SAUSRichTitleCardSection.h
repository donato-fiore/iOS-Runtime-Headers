// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUSRICHTITLECARDSECTION_H
#define SAUSRICHTITLECARDSECTION_H

@class NSString;


#import "SAUSTitleCardSection.h"
#import "SAUIImageResource.h"

@interface SAUSRichTitleCardSection : SAUSTitleCardSection

@property (nonatomic) BOOL centered;
@property (copy, nonatomic) NSString *contentRatingText;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) SAUIImageResource *titleImage;


+(id)richTitleCardSection;
+(id)richTitleCardSectionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif