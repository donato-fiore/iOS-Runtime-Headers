// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWMPRECIPITATIONFORMATTER_H
#define NWMPRECIPITATIONFORMATTER_H

@class NSString, NSNumber, NSNumberFormatter;
@protocol NWMDataFormatter;

#import <Foundation/Foundation.h>


@interface NWMPrecipitationFormatter : NSObject <NWMDataFormatter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *minimumPercentage; // ivar: _minimumPercentage
@property (retain, nonatomic) NSNumberFormatter *numberFormatter; // ivar: _numberFormatter
@property (readonly, nonatomic) NSString *percentSymbol;
@property (retain, nonatomic) NSNumberFormatter *percentageFormatter; // ivar: _percentageFormatter
@property (readonly) Class superclass;


+(id)sharedFormatter;
-(CGFloat)roundedChanceOfPrecipitation:(id)arg0 ;
-(CGFloat)value:(id)arg0 ;
-(id)formattedChanceOfPrecipitation:(id)arg0 shouldIncludePercentSymbol:(BOOL)arg1 ;
-(id)formattedChanceOfPrecipitation:(id)arg0 style:(NSUInteger)arg1 shouldIncludePercentSymbol:(BOOL)arg2 ;
-(id)formattedChanceOfPrecipitationChance:(id)arg0 style:(NSUInteger)arg1 shouldIncludePercentSymbol:(BOOL)arg2 ;
-(id)init;


@end


#endif