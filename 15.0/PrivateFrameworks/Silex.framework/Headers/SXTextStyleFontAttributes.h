// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXTEXTSTYLEFONTATTRIBUTES_H
#define SXTEXTSTYLEFONTATTRIBUTES_H

@class NSString;
@protocol SXTextStyleFontAttributes;


#import "SXJSONFontAttributes.h"

@interface SXTextStyleFontAttributes : SXJSONFontAttributes <SXTextStyleFontAttributes>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *familyName;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger style;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger weight;
@property (readonly, nonatomic) NSUInteger weightLabel;
@property (readonly, nonatomic) NSInteger width;


-(NSUInteger)weightLabelWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif