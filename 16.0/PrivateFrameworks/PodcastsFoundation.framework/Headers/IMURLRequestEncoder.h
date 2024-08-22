// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMURLREQUESTENCODER_H
#define IMURLREQUESTENCODER_H

@class AMSURLRequestEncoder, NSString;
@protocol IMRequestEncoding;



@interface IMURLRequestEncoder : AMSURLRequestEncoder <IMRequestEncoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL personalizeRequests; // ivar: personalizeRequests
@property (readonly) Class superclass;


-(id)initWithBag:(id)arg0 ;
-(id)requestByEncodingRequest:(id)arg0 parameters:(id)arg1 ;
-(void)prepareRequest:(id)arg0 account:(id)arg1 completion:(id)arg2 ;
-(void)prepareRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif