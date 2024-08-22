// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNFETCHMETADATACONNECTIONOPERATION_H
#define LNFETCHMETADATACONNECTIONOPERATION_H

@class LNBundleMetadata;


#import "LNConnectionOperation.h"

@interface LNFetchMetadataConnectionOperation : LNConnectionOperation

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) LNBundleMetadata *metadata; // ivar: _metadata


-(id)initWithConnectionInterface:(id)arg0 completionHandler:(id)arg1 ;
-(void)finishWithError:(id)arg0 ;
-(void)start;


@end


#endif