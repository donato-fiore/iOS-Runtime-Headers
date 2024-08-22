// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSCONTACTFILLERDATACOLLECTIONSTATISTICS_H
#define _PSCONTACTFILLERDATACOLLECTIONSTATISTICS_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface _PSContactFillerDataCollectionStatistics : NSObject

@property CGFloat avg; // ivar: _avg
@property (retain, nonatomic) NSMutableArray *list; // ivar: _list
@property CGFloat max; // ivar: _max
@property CGFloat min; // ivar: _min
@property CGFloat stdev; // ivar: _stdev


-(id)initWithList:(id)arg0 ;
-(void)addValue:(id)arg0 ;
-(void)calculateStats;


@end


#endif