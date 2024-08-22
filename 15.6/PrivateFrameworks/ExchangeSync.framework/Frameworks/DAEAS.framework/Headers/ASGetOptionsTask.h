// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASGETOPTIONSTASK_H
#define ASGETOPTIONSTASK_H

@class NSArray;


#import "ASTask.h"

@interface ASGetOptionsTask : ASTask {
    NSArray *_versionArray;
    NSArray *_commandArray;
}




+(void)__setUsePort:(BOOL)arg0 ;
-(BOOL)_shouldSendAuthForRequest:(id)arg0 ;
-(BOOL)processContext:(id)arg0 ;
-(BOOL)requiresEASVersionInformaton;
-(BOOL)shouldStallAfterConnectionLost;
-(id)_url;
-(id)commandArray;
-(id)httpMethod;
-(id)requestBody;
-(id)versionArray;
-(int)commandCode;
-(void)finishWithError:(id)arg0 ;
-(void)setCommandArray:(id)arg0 ;
-(void)setVersionArray:(id)arg0 ;


@end


#endif