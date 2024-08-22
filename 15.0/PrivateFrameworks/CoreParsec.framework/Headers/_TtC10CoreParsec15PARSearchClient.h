// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC10COREPARSEC15PARSEARCHCLIENT_H
#define _TTC10COREPARSEC15PARSEARCHCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface _TtC10CoreParsec15PARSearchClient : NSObject {
    ? sessions;
    ? imageLoader;
    ? receivingStreamDelegate;
    ? queue;
}


@property (nonatomic, readonly) NSXPCConnection *connection; // ivar: connection


-(NSUInteger)request:(id)arg0 request:(id)arg1 reply:(id)arg2 ;
-(id)init;
-(void)bag:(id)arg0 reply:(id)arg1 ;
-(void)clearCompletionsFrom:(id)arg0 to:(id)arg1 ;
-(void)dealloc;
-(void)fileHandleAndAttributesForResource:(id)arg0 completion:(id)arg1 ;
-(void)forceFetchBag:(id)arg0 reply:(id)arg1 ;
-(void)getImageMap:(id)arg0 ;
-(void)listSessions:(id)arg0 ;
-(void)reportFeedback:(id)arg0 feedback:(id)arg1 queryId:(NSUInteger)arg2 ;
-(void)updateParametersForSmartSearchV1:(id)arg0 smartSearchV2:(id)arg1 ;


@end


#endif