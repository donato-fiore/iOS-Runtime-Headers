// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSRESETSERVERPROTOCOL_H
#define MSRESETSERVERPROTOCOL_H



#import "MSStreamsProtocol.h"

@interface MSResetServerProtocol : MSStreamsProtocol {
    __MSRSPCContext _context;
}




-(id)delegate;
-(id)initWithPersonID:(id)arg0 baseURL:(id)arg1 ;
-(void)_coreProtocolDidFailAuthenticationError:(id)arg0 ;
-(void)_coreProtocolDidFinishError:(id)arg0 ;
-(void)abort;
-(void)dealloc;
-(void)resetServerState;
-(void)setDelegate:(id)arg0 ;


@end


#endif