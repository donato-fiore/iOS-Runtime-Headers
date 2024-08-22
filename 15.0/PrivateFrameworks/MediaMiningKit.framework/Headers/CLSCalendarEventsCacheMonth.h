// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSCALENDAREVENTSCACHEMONTH_H
#define CLSCALENDAREVENTSCACHEMONTH_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface CLSCalendarEventsCacheMonth : NSObject

@property (readonly, nonatomic) NSMutableSet *days; // ivar: _days
@property (nonatomic) NSInteger month; // ivar: _month


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)initWithMonth:(NSInteger)arg0 ;


@end


#endif