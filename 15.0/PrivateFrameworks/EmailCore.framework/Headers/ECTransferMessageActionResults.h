// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ECTRANSFERMESSAGEACTIONRESULTS_H
#define ECTRANSFERMESSAGEACTIONRESULTS_H

@class NSArray, NSString, NSDictionary, NSError;
@protocol ECTransferMessageActionResultsBuilder;


#import "ECLocalMessageActionResults.h"

@interface ECTransferMessageActionResults : ECLocalMessageActionResults <ECTransferMessageActionResultsBuilder>



@property (copy, nonatomic) NSArray *completedItems; // ivar: _completedItems
@property (copy, nonatomic) NSArray *createdServerMessages; // ivar: _createdServerMessages
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *downloadedDataByCopyItems; // ivar: _downloadedDataByCopyItems
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSArray *failedItems; // ivar: _failedItems
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger phaseForResults; // ivar: _phaseForResults
@property (readonly) Class superclass;


-(id)initWithBuilder:(id)arg0 ;


@end


#endif