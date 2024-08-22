// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXCONDITIONALHINTS_H
#define SXCONDITIONALHINTS_H

@class NSString;
@protocol SXConditionalHints;


#import "SXJSONObject.h"

@interface SXConditionalHints : SXJSONObject <SXConditionalHints>



@property (readonly, nonatomic) NSInteger autoplacement;
@property (readonly, nonatomic) NSInteger componentLayouts;
@property (readonly, nonatomic) NSInteger componentStyles;
@property (readonly, nonatomic) NSInteger componentTextStyles;
@property (readonly, nonatomic) NSInteger components;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger documentStyle;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger textStyles;


-(NSInteger)autoplacementWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)componentLayoutsWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)componentStylesWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)componentTextStylesWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)componentsWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)documentStyleWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)ternaryValueForJSONValue:(id)arg0 type:(int)arg1 ;
-(NSInteger)textStylesWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif