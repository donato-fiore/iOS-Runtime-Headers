// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLPROXYPUSHSESSION_H
#define CPLPROXYPUSHSESSION_H

@class NSString;
@protocol CPLPushChangeSessionImplementation;


#import "CPLProxySession.h"

@interface CPLProxyPushSession : CPLProxySession <CPLPushChangeSessionImplementation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)beginSessionForProxy:(id)arg0 knownVersion:(id)arg1 context:(id)arg2 completionHandler:(id)arg3 ;
-(void)commitChangeBatch:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif