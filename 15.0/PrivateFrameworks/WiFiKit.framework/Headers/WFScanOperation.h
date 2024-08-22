// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSCANOPERATION_H
#define WFSCANOPERATION_H

@class NSSet, NSDictionary, NSMutableSet, NSString;


#import "WFOperation.h"
#import "WFScanRequest.h"

@interface WFScanOperation : WFOperation

@property (retain, nonatomic) WFScanRequest *request; // ivar: _request
@property (readonly, nonatomic) NSSet *results;
@property (retain, nonatomic) NSDictionary *scanParameters; // ivar: _scanParameters
@property (retain, nonatomic) NSMutableSet *scanResults; // ivar: _scanResults
@property (copy, nonatomic) NSString *targetSSID; // ivar: _targetSSID


-(id)description;
-(id)initWithRequest:(id)arg0 ;
-(void)cancel;
-(void)finish;
-(void)scanDidFinishWithResults:(id)arg0 error:(int)arg1 ;
-(void)start;


@end


#endif