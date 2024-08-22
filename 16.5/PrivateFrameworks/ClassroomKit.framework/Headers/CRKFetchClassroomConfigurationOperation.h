// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKFETCHCLASSROOMCONFIGURATIONOPERATION_H
#define CRKFETCHCLASSROOMCONFIGURATIONOPERATION_H

@class CATOperation, NSDictionary, CATRemoteTaskOperation;
@protocol CRKRequestPerformingProtocol;



@interface CRKFetchClassroomConfigurationOperation : CATOperation {
    id<CRKRequestPerformingProtocol> *mStudentDaemonProxy;
    NSDictionary *mSourcesByType;
    CATRemoteTaskOperation *mFetchConfigurationOperation;
}




+(id)defaultSourcesByType;
-(BOOL)isAsynchronous;
-(id)init;
-(id)initWithStudentDaemonProxy:(id)arg0 ;
-(id)initWithStudentDaemonProxy:(id)arg0 sourcesByType:(id)arg1 ;
-(void)cancel;
-(void)fetchConfigurationMacOS;
-(void)fetchConfigurationOperationDidFinish:(id)arg0 ;
-(void)fetchConfigurationiOS;
-(void)main;
-(void)run;


@end


#endif