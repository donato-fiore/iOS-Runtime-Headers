// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWNETWORKOFINTERESTCLIENTPROXY_H
#define NWNETWORKOFINTERESTCLIENTPROXY_H

@protocol SFClientInterface, SFClientInterfaceProxy;

#import <Foundation/Foundation.h>


@interface NWNetworkOfInterestClientProxy : NSObject <SFClientInterface>

 {
    BOOL _proxyHaveNOIs;
    BOOL _proxyUpdateNOI;
}


@property (weak, nonatomic) NSObject<SFClientInterfaceProxy> *delegate; // ivar: _delegate


-(id)initWithDelegate:(id)arg0 ;
-(void)haveNOIs:(id)arg0 tornDown:(BOOL)arg1 ;
-(void)updateNOI:(id)arg0 keyPath:(id)arg1 change:(id)arg2 ;


@end


#endif