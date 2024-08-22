// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKINTERACTIVECHARTDISTRIBUTIONSTYLEKEY_H
#define _HKINTERACTIVECHARTDISTRIBUTIONSTYLEKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _HKInteractiveChartDistributionStyleKey : NSObject <NSCopying>



@property (retain, nonatomic) NSString *predicateName; // ivar: _predicateName
@property (nonatomic) NSInteger style; // ivar: _style
@property (nonatomic) NSInteger timeScope; // ivar: _timeScope


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDistributionStyle:(NSInteger)arg0 timeScope:(NSInteger)arg1 predicateName:(id)arg2 ;


@end


#endif