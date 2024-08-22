// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUSROWCARDSECTION_H
#define SAUSROWCARDSECTION_H

@class NSString;


#import "SAUSCardSection.h"
#import "SAUIImageResource.h"

@interface SAUSRowCardSection : SAUSCardSection

@property (retain, nonatomic) SAUIImageResource *image;
@property (nonatomic) BOOL imageIsRightAligned;
@property (copy, nonatomic) NSString *leftText;
@property (copy, nonatomic) NSString *rightText;


+(id)rowCardSection;
+(id)rowCardSectionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif