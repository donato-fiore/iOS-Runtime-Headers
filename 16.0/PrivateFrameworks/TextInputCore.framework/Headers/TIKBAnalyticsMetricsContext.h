// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIKBANALYTICSMETRICSCONTEXT_H
#define TIKBANALYTICSMETRICSCONTEXT_H

@class TIAnalyticsMetricsContext, NSString, NSDictionary;



@interface TIKBAnalyticsMetricsContext : TIAnalyticsMetricsContext

@property (readonly, nonatomic) NSString *inputVariant; // ivar: _inputVariant
@property (readonly, nonatomic) unsigned char keyboardType; // ivar: _keyboardType
@property (readonly, nonatomic) NSString *layoutName; // ivar: _layoutName
@property (readonly, nonatomic) NSString *secondaryLanguage; // ivar: _secondaryLanguage
@property (readonly, nonatomic) NSString *secondaryRegion; // ivar: _secondaryRegion
@property (readonly, nonatomic) NSDictionary *testingParameters; // ivar: _testingParameters
@property (readonly, nonatomic) NSInteger userInterfaceIdiom; // ivar: _userInterfaceIdiom


+(BOOL)supportsSecureCoding;
+(NSInteger)userInterfaceIdiomStringToEnum:(id)arg0 ;
+(id)keyboardTypeEnumToString:(unsigned char)arg0 ;
+(id)userInterfaceIdiomToString:(NSInteger)arg0 ;
+(unsigned char)keyboardTypeStringToEnum:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInputLanguage:(id)arg0 inputRegion:(id)arg1 inputVariant:(id)arg2 secondaryLanguage:(id)arg3 secondaryRegion:(id)arg4 layoutName:(id)arg5 keyboardType:(unsigned char)arg6 userInterfaceIdiom:(NSInteger)arg7 testingParameters:(id)arg8 ;
-(id)initWithInputLanguage:(id)arg0 inputRegion:(id)arg1 layoutName:(id)arg2 keyboardType:(unsigned char)arg3 userInterfaceIdiom:(NSInteger)arg4 ;
-(id)initWithInputLanguage:(id)arg0 inputRegion:(id)arg1 layoutName:(id)arg2 keyboardType:(unsigned char)arg3 userInterfaceIdiom:(NSInteger)arg4 testingParameters:(id)arg5 ;
-(id)initWithKeyboardState:(id)arg0 activeInputModes:(id)arg1 testingParameters:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif