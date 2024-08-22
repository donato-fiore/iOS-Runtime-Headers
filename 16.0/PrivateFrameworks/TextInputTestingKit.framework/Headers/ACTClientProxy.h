// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACTCLIENTPROXY_H
#define ACTCLIENTPROXY_H

@class NSString;
@protocol TIClientProxy, ACTClientProtocol;

#import <Foundation/Foundation.h>


@interface ACTClientProxy : NSObject <TIClientProxy>



@property (readonly, weak, nonatomic) NSObject<ACTClientProtocol> *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithClient:(id)arg0 ;
-(void)closeRequestToken:(id)arg0 ;
-(void)pushCandidates:(id)arg0 requestToken:(id)arg1 ;


@end


#endif