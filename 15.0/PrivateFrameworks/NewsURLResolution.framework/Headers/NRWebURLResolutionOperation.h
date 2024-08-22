// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NRWEBURLRESOLUTIONOPERATION_H
#define NRWEBURLRESOLUTIONOPERATION_H

@class FCOperation, NSString, NSURL;
@protocol NRURLResolutionOperation, NRBloomFilterInfoService;



@interface NRWebURLResolutionOperation : FCOperation <NRURLResolutionOperation>



@property (readonly, nonatomic) NSObject<NRBloomFilterInfoService> *bloomFilterInfoService; // ivar: _bloomFilterInfoService
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *resolutionCompletion; // ivar: _resolutionCompletion
@property (copy, nonatomic) NSURL *resultNewsURL; // ivar: _resultNewsURL
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSURL *webURL; // ivar: _webURL


-(BOOL)validateOperation;
-(id)init;
-(id)initWithWebURL:(id)arg0 bloomFilterInfoService:(id)arg1 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif