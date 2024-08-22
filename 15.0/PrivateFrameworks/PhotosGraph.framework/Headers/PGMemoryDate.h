// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGMEMORYDATE_H
#define PGMEMORYDATE_H


#import <Foundation/Foundation.h>


@interface PGMemoryDate : NSObject {
    NSInteger _era;
    NSInteger _year;
    NSInteger _month;
    NSInteger _day;
}




-(id)initWithLocalDate:(id)arg0 ;
-(id)universalDateInTimeZone:(id)arg0 ;


@end


#endif