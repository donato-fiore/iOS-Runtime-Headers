// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WSPQUERYSTATUSEXOUT_H
#define WSPQUERYSTATUSEXOUT_H


#import <Foundation/Foundation.h>

#import "wspHeader.h"

@interface wspQueryStatusExOut : NSObject

@property unsigned int cDocumentsToFilter; // ivar: _cDocumentsToFilter
@property unsigned int cFilteredDocuments; // ivar: _cFilteredDocuments
@property unsigned int cResultsFound; // ivar: _cResultsFound
@property unsigned int cRowsTotal; // ivar: _cRowsTotal
@property unsigned int dwRatioFinishedDenominator; // ivar: _dwRatioFinishedDenominator
@property unsigned int dwRatioFinishedNumerator; // ivar: _dwRatioFinishedNumerator
@property unsigned int maxRank; // ivar: _maxRank
@property unsigned int qStatus; // ivar: _qStatus
@property unsigned int rowsetBookMark; // ivar: _rowsetBookMark
@property (retain) wspHeader *whdr; // ivar: _whdr
@property unsigned int whereID; // ivar: _whereID


-(id)init;
-(int)decodeBuffer:(id)arg0 BufferOffset:(unsigned int)arg1 BytesDecoded:(*unsigned int)arg2 ;


@end


#endif