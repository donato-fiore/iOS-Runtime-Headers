// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSREAUTHORIZATIONPROTOCOL_H
#define MSREAUTHORIZATIONPROTOCOL_H

@class NSArray;


#import "MSStreamsProtocol.h"

@interface MSReauthorizationProtocol : MSStreamsProtocol {
    __MSRPCContext _context;
    NSArray *_assetsInFlight;
}




-(id)delegate;
-(id)initWithPersonID:(id)arg0 baseURL:(id)arg1 ;
-(void)_coreProtocolDidFailAuthenticationError:(id)arg0 ;
-(void)_coreProtocolDidFinishResponse:(id)arg0 error:(id)arg1 ;
-(void)abort;
-(void)dealloc;
-(void)requestReauthorizationForAssets:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif