// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ALGOSSCOREDATACSV_H
#define ALGOSSCOREDATACSV_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "AlgosScoreCSVReader.h"

@interface AlgosScoreDataCSV : NSObject {
    *void csvData;
}


@property int debug; // ivar: _debug
@property (retain, nonatomic) AlgosScoreCSVReader *rawStreamData; // ivar: _rawStreamData
@property (retain, nonatomic) NSMutableDictionary *statsDict; // ivar: _statsDict


-(id)init;
-(id)readData:(id)arg0 ;
-(id)readData:(id)arg0 catchException:(BOOL)arg1 ;
-(id)readDirectoryAndScore:(id)arg0 score:(id)arg1 options:(id)arg2 ;
-(int)transformer;
-(void)clearStreamingData;
-(void)dealloc;
-(void)populateScore:(id)arg0 ;


@end


#endif