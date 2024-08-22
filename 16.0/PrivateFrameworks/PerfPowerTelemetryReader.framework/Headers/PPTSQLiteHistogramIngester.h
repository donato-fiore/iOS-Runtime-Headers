// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPTSQLITEHISTOGRAMINGESTER_H
#define PPTSQLITEHISTOGRAMINGESTER_H

@class NSArray, NSString, NSPredicate;
@protocol PPTDataIngesterProtocol;

#import <Foundation/Foundation.h>


@interface PPTSQLiteHistogramIngester : NSObject <PPTDataIngesterProtocol>

 {
    NSArray *_dimensions;
}


@property (readonly, copy, nonatomic) NSString *filepath; // ivar: _filepath
@property (retain, nonatomic) NSArray *metricNames; // ivar: _metricNames
@property (readonly, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (readonly, copy, nonatomic) NSString *sourceName; // ivar: _sourceName


-(id)_convertSQLiteDataFromQuery:(id)arg0 withProperties:(id)arg1 error:(*id)arg2 ;
-(id)initWithFilepath:(id)arg0 tableName:(id)arg1 metricNames:(id)arg2 predicate:(id)arg3 dimensions:(id)arg4 ;
-(id)parseData:(*id)arg0 ;


@end


#endif