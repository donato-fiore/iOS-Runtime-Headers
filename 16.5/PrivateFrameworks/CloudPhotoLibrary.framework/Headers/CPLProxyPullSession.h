// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLPROXYPULLSESSION_H
#define CPLPROXYPULLSESSION_H

@class NSString;
@protocol CPLPullChangeSessionImplementation;


#import "CPLProxySession.h"

@interface CPLProxyPullSession : CPLProxySession <CPLPullChangeSessionImplementation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)beginSessionForProxy:(id)arg0 knownVersion:(id)arg1 context:(id)arg2 completionHandler:(id)arg3 ;
-(void)acknowledgeChangeBatch:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getChangeBatchWithCompletionHandler:(id)arg0 ;


@end


#endif