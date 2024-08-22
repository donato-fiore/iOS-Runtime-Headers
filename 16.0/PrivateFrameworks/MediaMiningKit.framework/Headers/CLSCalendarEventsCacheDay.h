// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSCALENDAREVENTSCACHEDAY_H
#define CLSCALENDAREVENTSCACHEDAY_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface CLSCalendarEventsCacheDay : NSObject

@property (nonatomic) NSInteger day; // ivar: _day
@property (readonly, nonatomic) NSMutableSet *events; // ivar: _events


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)initWithDay:(NSInteger)arg0 ;


@end


#endif