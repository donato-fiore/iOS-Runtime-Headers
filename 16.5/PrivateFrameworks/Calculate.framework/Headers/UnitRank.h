// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNITRANK_H
#define UNITRANK_H

@class NSLocale;

#import <Foundation/Foundation.h>


@interface UnitRank : NSObject

@property (retain, nonatomic) id *context; // ivar: _context
@property (retain, nonatomic) NSLocale *locale; // ivar: _locale
@property (nonatomic) float rank; // ivar: _rank
@property (nonatomic) int unitID; // ivar: _unitID


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithUnitID:(int)arg0 rank:(float)arg1 locale:(id)arg2 ;
-(id)initWithUnitID:(int)arg0 rank:(float)arg1 locale:(id)arg2 context:(id)arg3 ;


@end


#endif