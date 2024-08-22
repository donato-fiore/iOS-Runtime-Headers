// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRRANGINGCLIENTEXPORTEDOBJECT_H
#define PRRANGINGCLIENTEXPORTEDOBJECT_H

@class NSString;
@protocol PRRangingClientProtocol, PRAidedRangingClientProtocol;

#import <Foundation/Foundation.h>


@interface PRRangingClientExportedObject : NSObject <PRRangingClientProtocol, PRAidedRangingClientProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PRRangingClientProtocol> *rangingClient; // ivar: _rangingClient
@property (readonly) Class superclass;


-(id)initWithRangingClient:(id)arg0 ;
-(void)didFailWithError:(id)arg0 ;
-(void)didReceiveNewSolutions:(id)arg0 ;
-(void)rangingRequestDidUpdateStatus:(NSUInteger)arg0 ;
-(void)rangingServiceDidUpdateState:(NSUInteger)arg0 cause:(NSInteger)arg1 ;
-(void)remoteDevice:(id)arg0 didChangeState:(NSInteger)arg1 ;
-(void)sendDataToPeers:(id)arg0 ;


@end


#endif