// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKINVALIDATETRANSPORTOPERATION_H
#define CRKINVALIDATETRANSPORTOPERATION_H

@class CATOperation, NSString, CATTransport;
@protocol CATTransportDelegate;



@interface CRKInvalidateTransportOperation : CATOperation <CATTransportDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CATTransport *transport; // ivar: _transport


-(BOOL)isAsynchronous;
-(id)initWithTransport:(id)arg0 ;
-(void)main;
-(void)transportDidInvalidate:(id)arg0 ;


@end


#endif