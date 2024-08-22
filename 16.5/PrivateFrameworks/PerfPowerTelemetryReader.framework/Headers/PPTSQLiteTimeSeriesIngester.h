// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPTSQLITETIMESERIESINGESTER_H
#define PPTSQLITETIMESERIESINGESTER_H

@class NSURL, NSArray, NSPredicate, NSString;
@protocol PPTDataIngesterProtocol;

#import <Foundation/Foundation.h>

#import "PPTTimestampConverter.h"

@interface PPTSQLiteTimeSeriesIngester : NSObject <PPTDataIngesterProtocol>

 {
    NSUInteger _limitCount;
    NSUInteger _offsetCount;
    NSUInteger _readDirection;
    BOOL _convertTimestamp;
    PPTTimestampConverter *_timestampConverter;
}


@property (readonly, copy, nonatomic) NSURL *filepath; // ivar: _filepath
@property (retain, nonatomic) NSArray *metricNames; // ivar: _metricNames
@property (readonly, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (readonly, copy, nonatomic) NSString *sourceName; // ivar: _sourceName


-(id)_convertSQLiteDataFromQuery:(id)arg0 withProperties:(id)arg1 error:(*id)arg2 ;
-(id)initWithFilepath:(id)arg0 tableName:(id)arg1 metricNames:(id)arg2 predicate:(id)arg3 limitCount:(NSUInteger)arg4 offsetCount:(NSUInteger)arg5 readDirection:(NSUInteger)arg6 convertTimestamp:(BOOL)arg7 ;
-(id)parseData:(*id)arg0 ;


@end


#endif