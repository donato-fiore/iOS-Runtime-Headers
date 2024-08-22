// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXCOMPONENTSTYLE_H
#define SXCOMPONENTSTYLE_H

@class UIColor, NSString;
@protocol SXComponentStyle;


#import "SXJSONObject.h"
#import "SXBorder.h"
#import "SXJSONArray.h"
#import "SXFill.h"
#import "SXComponentMask.h"
#import "SXComponentShadow.h"
#import "SXDataTableStyle.h"

@interface SXComponentStyle : SXJSONObject <SXComponentStyle>



@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) SXBorder *border;
@property (readonly, nonatomic) SXJSONArray *conditional;
@property (readonly, nonatomic) CGFloat cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SXFill *fill;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) SXComponentMask *mask;
@property (readonly, nonatomic) CGFloat opacity;
@property (readonly, nonatomic) SXComponentShadow *shadow;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXDataTableStyle *tableStyle;
@property (readonly, nonatomic) NSUInteger traits;


+(id)valueClassBlockForPropertyWithName:(SEL)arg0 ;
-(id)fillWithValue:(id)arg0 withType:(int)arg1 ;
-(id)maskWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif