// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKGAUGEPROVIDER_H
#define CLKGAUGEPROVIDER_H

@class NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CLKGaugeProvider : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *accessibilityLabel; // ivar: _accessibilityLabel
@property (nonatomic) BOOL finalized; // ivar: _finalized
@property (retain, nonatomic) NSArray *gaugeColorLocations; // ivar: _gaugeColorLocations
@property (retain, nonatomic) NSArray *gaugeColors; // ivar: _gaugeColors
@property (nonatomic) BOOL paused; // ivar: _paused
@property (nonatomic) NSInteger style; // ivar: _style


+(BOOL)supportsSecureCoding;
+(id)providerWithJSONObjectRepresentation:(id)arg0 bundle:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)needsTimerUpdates;
-(BOOL)validate;
-(CGFloat)progressFractionForNow:(id)arg0 ;
-(NSUInteger)hash;
-(id)JSONObjectRepresentation;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONObjectRepresentation:(id)arg0 ;
-(id)startUpdatesWithHandler:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finalize;
-(void)stopUpdatesForToken:(id)arg0 ;


@end


#endif