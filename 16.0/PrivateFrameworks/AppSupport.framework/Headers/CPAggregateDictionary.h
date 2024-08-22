// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPAGGREGATEDICTIONARY_H
#define CPAGGREGATEDICTIONARY_H


#import <Foundation/Foundation.h>


@interface CPAggregateDictionary : NSObject

@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;


+(id)sharedAggregateDictionary;
-(int)commit;
-(void)addValue:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)clearDistributionKey:(id)arg0 ;
-(void)clearScalarKey:(id)arg0 ;
-(void)decrementKey:(id)arg0 ;
-(void)incrementKey:(id)arg0 ;
-(void)pushValue:(CGFloat)arg0 forKey:(id)arg1 ;
-(void)setValue:(CGFloat)arg0 forDistributionKey:(id)arg1 ;
-(void)setValue:(NSInteger)arg0 forScalarKey:(id)arg1 ;
-(void)significantTimeChanged;
-(void)subtractValue:(NSInteger)arg0 forKey:(id)arg1 ;


@end


#endif