// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSCALENDAREVENTSCACHEYEAR_H
#define CLSCALENDAREVENTSCACHEYEAR_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface CLSCalendarEventsCacheYear : NSObject

@property (readonly, nonatomic) NSMutableSet *months; // ivar: _months
@property (nonatomic) NSInteger year; // ivar: _year


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)initWithYear:(NSInteger)arg0 ;


@end


#endif