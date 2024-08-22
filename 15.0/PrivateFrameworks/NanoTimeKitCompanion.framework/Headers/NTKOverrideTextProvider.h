// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKOVERRIDETEXTPROVIDER_H
#define NTKOVERRIDETEXTPROVIDER_H

@class CLKTextProvider, NSString;



@interface NTKOverrideTextProvider : CLKTextProvider

@property (copy, nonatomic) id *overrideBlock; // ivar: _overrideBlock
@property (copy, nonatomic) NSString *text; // ivar: _text


+(id)_dashTrackingTextProviderWithDashes:(id)arg0 tracking:(CGFloat)arg1 ;
+(id)_dashTrackingTextProviderWithDashes:(id)arg0 tracking:(CGFloat)arg1 weight:(CGFloat)arg2 ;
+(id)textProviderWithText:(id)arg0 overrideBlock:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_sessionAttributedTextForIndex:(NSUInteger)arg0 withStyle:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif