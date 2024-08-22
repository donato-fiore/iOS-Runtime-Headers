// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKSIMPLEGAUGEPROVIDER_H
#define CLKSIMPLEGAUGEPROVIDER_H



#import "CLKGaugeProvider.h"

@interface CLKSimpleGaugeProvider : CLKGaugeProvider

@property (nonatomic) float fillFraction; // ivar: _fillFraction


+(BOOL)supportsSecureCoding;
+(id)gaugeProviderWithStyle:(NSInteger)arg0 gaugeColor:(id)arg1 fillFraction:(float)arg2 ;
+(id)gaugeProviderWithStyle:(NSInteger)arg0 gaugeColors:(id)arg1 gaugeColorLocations:(id)arg2 fillFraction:(float)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)needsTimerUpdates;
-(BOOL)validate;
-(CGFloat)progressFractionForNow:(id)arg0 ;
-(NSUInteger)hash;
-(id)JSONObjectRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONObjectRepresentation:(id)arg0 ;
-(id)startUpdatesWithHandler:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)stopUpdatesForToken:(id)arg0 ;


@end


#endif