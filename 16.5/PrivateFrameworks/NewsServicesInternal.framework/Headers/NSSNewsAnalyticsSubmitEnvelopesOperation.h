// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSNEWSANALYTICSSUBMITENVELOPESOPERATION_H
#define NSSNEWSANALYTICSSUBMITENVELOPESOPERATION_H

@class FCOperation, NSArray;
@protocol FCNewsAppConfigurationManager><FCCoreConfigurationManager;



@interface NSSNewsAnalyticsSubmitEnvelopesOperation : FCOperation

@property (retain, nonatomic) NSObject<FCNewsAppConfigurationManager><FCCoreConfigurationManager> *appConfigurationManager; // ivar: _appConfigurationManager
@property (copy, nonatomic) NSArray *envelopes; // ivar: _envelopes
@property (copy, nonatomic) id *handoffCompletion; // ivar: _handoffCompletion
@property (copy, nonatomic) id *submissionCompletion; // ivar: _submissionCompletion


-(BOOL)validateOperation;
-(id)init;
-(void)operationDidFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif