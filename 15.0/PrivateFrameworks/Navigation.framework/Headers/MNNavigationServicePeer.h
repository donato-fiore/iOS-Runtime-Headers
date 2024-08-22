// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNNAVIGATIONSERVICEPEER_H
#define MNNAVIGATIONSERVICEPEER_H

@class GEONavdPeer, NSString;



@interface MNNavigationServicePeer : GEONavdPeer

@property (readonly, nonatomic) NSString *peerIdentifier; // ivar: _peerIdentifier
@property (readonly, nonatomic) int processIdentifier; // ivar: _processIdentifier


-(BOOL)isEntitled;
-(id)auditToken;
-(id)description;
-(id)initWithConnection:(id)arg0 ;
-(void)clearConnection;


@end


#endif