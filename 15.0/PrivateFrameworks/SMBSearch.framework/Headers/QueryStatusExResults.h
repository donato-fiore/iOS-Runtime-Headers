// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QUERYSTATUSEXRESULTS_H
#define QUERYSTATUSEXRESULTS_H


#import <Foundation/Foundation.h>


@interface QueryStatusExResults : NSObject

@property unsigned int cDocumentsToFilter; // ivar: _cDocumentsToFilter
@property unsigned int cFilteredDocuments; // ivar: _cFilteredDocuments
@property unsigned int cResultsFound; // ivar: _cResultsFound
@property unsigned int cRowsTotal; // ivar: _cRowsTotal
@property unsigned int dwRatioFinishedDenominator; // ivar: _dwRatioFinishedDenominator
@property unsigned int dwRatioFinishedNumerator; // ivar: _dwRatioFinishedNumerator
@property unsigned int maxRank; // ivar: _maxRank
@property unsigned int qStatus; // ivar: _qStatus
@property unsigned int rowsetBookMark; // ivar: _rowsetBookMark
@property unsigned int whereID; // ivar: _whereID


-(id)init;


@end


#endif