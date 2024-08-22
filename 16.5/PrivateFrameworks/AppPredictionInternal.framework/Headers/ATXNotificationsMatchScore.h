// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXNOTIFICATIONSMATCHSCORE_H
#define ATXNOTIFICATIONSMATCHSCORE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface ATXNotificationsMatchScore : NSObject {
    NSMutableArray *_values;
}




-(id)dict;
-(id)get:(NSUInteger)arg0 ;
-(id)getAggregationBlockForName:(SEL)arg0 ;
-(id)init;
-(void)combine:(id)arg0 ;
-(void)set:(NSUInteger)arg0 value:(id)arg1 ;


@end


#endif