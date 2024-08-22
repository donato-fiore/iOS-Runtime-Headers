// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLURLREQUESTENCODER_H
#define BLURLREQUESTENCODER_H

@class AMSURLRequestEncoder, NSString, NSNumber;
@protocol AMSRequestEncoding;



@interface BLURLRequestEncoder : AMSURLRequestEncoder <AMSRequestEncoding>



@property (nonatomic) NSUInteger contentType; // ivar: _contentType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSNumber *dsid; // ivar: _dsid
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger reason; // ivar: _reason
@property (readonly) Class superclass;


+(id)DAAPClientVersionString;
+(id)DAAPPurchaseVersionString;
-(id)initWithBag:(id)arg0 withURLRequest:(id)arg1 ;
-(id)requestByEncodingRequest:(id)arg0 parameters:(id)arg1 ;


@end


#endif