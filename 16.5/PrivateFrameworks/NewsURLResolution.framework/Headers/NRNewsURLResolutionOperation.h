// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NRNEWSURLRESOLUTIONOPERATION_H
#define NRNEWSURLRESOLUTIONOPERATION_H

@class FCOperation, NSString, NSURL;
@protocol NRURLResolutionOperation;



@interface NRNewsURLResolutionOperation : FCOperation <NRURLResolutionOperation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSURL *newsURL; // ivar: _newsURL
@property (copy, nonatomic) id *resolutionCompletion; // ivar: _resolutionCompletion
@property (copy, nonatomic) NSURL *resultWebURL; // ivar: _resultWebURL
@property (readonly) Class superclass;


-(BOOL)validateOperation;
-(id)init;
-(id)initWithNewsURL:(id)arg0 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif