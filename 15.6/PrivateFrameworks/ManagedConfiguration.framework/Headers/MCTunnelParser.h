// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCTUNNELPARSER_H
#define MCTUNNELPARSER_H


#import <Foundation/Foundation.h>


@interface MCTunnelParser : NSObject



+(id)responseWithError:(id)arg0 ;
+(id)responseWithStatus:(id)arg0 ;
-(id)_commandDisconnect:(id)arg0 ;
-(void)processRequest:(id)arg0 assertion:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif