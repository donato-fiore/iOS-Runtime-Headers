// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSETUPMESCALSESSIONOPERATION_H
#define SUSETUPMESCALSESSIONOPERATION_H

@class ISOperation, SSURLRequestProperties;


#import "SUMescalSession.h"

@interface SUSetupMescalSessionOperation : ISOperation {
    SSURLRequestProperties *_requestProperties;
    SUMescalSession *_session;
}


@property (readonly) SUMescalSession *mescalSession;


-(BOOL)_isMescalEnabled;
-(id)_setupSAPCertificate:(*id)arg0 ;
-(id)_setupSAPWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithURLRequestProperties:(id)arg0 ;
-(void)dealloc;
-(void)run;


@end


#endif