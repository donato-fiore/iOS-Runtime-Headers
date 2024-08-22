// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCOREDATASQLLOGBINDER_H
#define PLCOREDATASQLLOGBINDER_H

@class NSString, NSMutableArray, NSRegularExpression;

#import <Foundation/Foundation.h>


@interface PLCoreDataSqlLogBinder : NSObject {
    NSString *_selectString;
    NSMutableArray *_bindValues;
    NSRegularExpression *_selectRegex;
    NSRegularExpression *_bindRegex;
}


@property (readonly, copy) NSString *boundSql;


-(id)init;
-(void)addLogLine:(id)arg0 ;


@end


#endif