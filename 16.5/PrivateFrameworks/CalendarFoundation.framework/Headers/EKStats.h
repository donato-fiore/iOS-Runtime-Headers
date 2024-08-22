// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKSTATS_H
#define EKSTATS_H


#import <Foundation/Foundation.h>


@interface EKStats : NSObject



+(BOOL)enabled;
+(void)addToScalar:(id)arg0 value:(NSInteger)arg1 domain:(int)arg2 ;
+(void)clearDistribution:(id)arg0 domain:(int)arg1 ;
+(void)clearScalar:(id)arg0 domain:(int)arg1 ;
+(void)pushToDistribution:(id)arg0 value:(CGFloat)arg1 domain:(int)arg2 ;
+(void)pushToDistribution:(id)arg0 value:(CGFloat)arg1 domain:(int)arg2 significantDigits:(unsigned int)arg3 ;
+(void)setDistribution:(id)arg0 value:(CGFloat)arg1 domain:(int)arg2 ;
+(void)setDistribution:(id)arg0 value:(CGFloat)arg1 domain:(int)arg2 significantDigits:(unsigned int)arg3 ;
+(void)setScalar:(id)arg0 value:(NSInteger)arg1 domain:(int)arg2 ;
-(id)initWithDomain:(int)arg0 ;
-(id)initWithDomain:(int)arg0 significantDigits:(unsigned int)arg1 ;
-(void)addToScalar:(id)arg0 value:(NSInteger)arg1 ;
-(void)clearDistribution:(id)arg0 ;
-(void)clearScalar:(id)arg0 ;
-(void)commit;
-(void)pushToDistribution:(id)arg0 value:(CGFloat)arg1 ;
-(void)pushToDistribution:(id)arg0 value:(CGFloat)arg1 significantDigits:(unsigned int)arg2 ;
-(void)setDistribution:(id)arg0 value:(CGFloat)arg1 ;
-(void)setDistribution:(id)arg0 value:(CGFloat)arg1 significantDigits:(unsigned int)arg2 ;
-(void)setScalar:(id)arg0 value:(NSInteger)arg1 ;


@end


#endif