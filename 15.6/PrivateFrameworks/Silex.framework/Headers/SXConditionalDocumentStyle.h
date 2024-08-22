// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCONDITIONALDOCUMENTSTYLE_H
#define SXCONDITIONALDOCUMENTSTYLE_H

@class NSString;
@protocol SXConditional;


#import "SXDocumentStyle.h"
#import "SXJSONArray.h"

@interface SXConditionalDocumentStyle : SXDocumentStyle <SXConditional>



@property (readonly, nonatomic) SXJSONArray *conditions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)valueClassBlockForPropertyWithName:(SEL)arg0 ;


@end


#endif