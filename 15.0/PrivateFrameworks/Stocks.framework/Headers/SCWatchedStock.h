// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCWATCHEDSTOCK_H
#define SCWATCHEDSTOCK_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SCWatchedStock : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *displaySymbol; // ivar: _displaySymbol
@property (readonly, copy, nonatomic) NSString *exchange; // ivar: _exchange
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *shortName; // ivar: _shortName
@property (readonly, copy, nonatomic) NSString *symbol; // ivar: _symbol


+(id)watchedStockWithSymbol:(id)arg0 name:(id)arg1 exchange:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 shortName:(id)arg1 symbol:(id)arg2 exchange:(id)arg3 ;
-(id)initWithName:(id)arg0 shortName:(id)arg1 symbol:(id)arg2 exchange:(id)arg3 displaySymbol:(id)arg4 ;


@end


#endif