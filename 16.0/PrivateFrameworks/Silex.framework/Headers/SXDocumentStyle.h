// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXDOCUMENTSTYLE_H
#define SXDOCUMENTSTYLE_H

@class UIColor, NSString;
@protocol SXDocumentStyle;


#import "SXJSONObject.h"
#import "SXJSONArray.h"
#import "SXJSONLinearGradient.h"

@interface SXDocumentStyle : SXJSONObject <SXDocumentStyle>



@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) SXJSONArray *conditional;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIColor *topBackgroundColor;
@property (readonly, nonatomic) SXJSONLinearGradient *topBackgroundGradient;


+(id)valueClassBlockForPropertyWithName:(SEL)arg0 ;


@end


#endif