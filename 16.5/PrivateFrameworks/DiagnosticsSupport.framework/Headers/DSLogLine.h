// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSLOGLINE_H
#define DSLOGLINE_H

@class NSString, NSDate, NSArray;

#import <Foundation/Foundation.h>


@interface DSLogLine : NSObject

@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSString *exception; // ivar: _exception
@property (readonly, nonatomic) NSArray *fields; // ivar: _fields
@property (readonly, nonatomic) BOOL isUsable; // ivar: _isUsable
@property (retain, nonatomic) NSString *type; // ivar: _type


+(id)logLinesFromArray:(id)arg0 ;
-(BOOL)boolFromFieldAtIndex:(int)arg0 ;
-(CGFloat)doubleFromFieldAtIndex:(int)arg0 ;
-(NSInteger)longLongFromFieldAtIndex:(int)arg0 ;
-(id)blankingStringFromFieldAtIndex:(int)arg0 ;
-(id)initWithLine:(id)arg0 ;
-(id)initWithLogLine:(id)arg0 ;
-(id)nilableStringFromFieldAtIndex:(int)arg0 ;
-(int)integerFromFieldAtIndex:(int)arg0 ;


@end


#endif