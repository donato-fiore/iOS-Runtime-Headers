// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRBTRANGINGCLIENTEXPORTEDOBJECT_H
#define PRBTRANGINGCLIENTEXPORTEDOBJECT_H

@class NSString;
@protocol PRBTRangingClientProtocol;

#import <Foundation/Foundation.h>


@interface PRBTRangingClientExportedObject : NSObject <PRBTRangingClientProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PRBTRangingClientProtocol> *rangingClient; // ivar: _rangingClient
@property (readonly) Class superclass;


-(id)initWithRangingClient:(id)arg0 ;
-(void)didConnectToDevice:(id)arg0 withError:(id)arg1 ;
-(void)didFailWithError:(id)arg0 ;
-(void)didFetchTxPower:(id)arg0 fromDevice:(id)arg1 withError:(id)arg2 ;
-(void)didReceiveNewBTRSSI:(id)arg0 ;
-(void)didStartRangingOnDevice:(id)arg0 withError:(id)arg1 ;
-(void)didStopOwnerRangingOnDevice:(id)arg0 withError:(id)arg1 ;


@end


#endif