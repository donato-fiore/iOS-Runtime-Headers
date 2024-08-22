// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASSEARCHTASK_H
#define ASSEARCHTASK_H

@class DASearchQuery;


#import "ASTask.h"

@interface ASSearchTask : ASTask

@property (nonatomic) int numDownloadedElements; // ivar: _numDownloadedElements
@property (retain, nonatomic) DASearchQuery *query; // ivar: _query


-(NSInteger)taskStatusForExchangeStatus:(int)arg0 ;
-(id)description;
-(id)initWithQuery:(id)arg0 ;
-(int)commandCode;


@end


#endif