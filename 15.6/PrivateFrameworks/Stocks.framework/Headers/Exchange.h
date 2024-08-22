// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EXCHANGE_H
#define EXCHANGE_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface Exchange : NSObject

@property (retain, nonatomic) NSDate *lastCloseDate; // ivar: _lastCloseDate
@property (readonly, nonatomic) CGFloat lastUpdateTime; // ivar: _lastUpdateTime
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSDate *nextOpenDate; // ivar: _nextOpenDate
@property (nonatomic) NSInteger status; // ivar: _status
@property (nonatomic) CGFloat streamInterval; // ivar: _streamInterval


+(id)formattedExchangeNameForName:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)marketIsAfterHours;
-(BOOL)marketIsOpen;
-(NSUInteger)hash;
-(id)archiveDictionary;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(void)_updateWithDictionary:(id)arg0 newUpdate:(BOOL)arg1 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif