// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSDATEFORMATTER_H
#define DSDATEFORMATTER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface DSDateFormatter : NSObject

@property (retain, nonatomic) NSMutableDictionary *dateFormatters; // ivar: _dateFormatters


+(id)sharedFormatter;
-(id)formatterWithType:(NSInteger)arg0 ;
-(id)init;


@end


#endif