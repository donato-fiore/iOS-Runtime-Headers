// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAACCEPTCHILDTRANSFERREQUEST_H
#define FAACCEPTCHILDTRANSFERREQUEST_H

@class AAFamilyRequest, NSString;



@interface FAAcceptChildTransferRequest : AAFamilyRequest

@property (copy, nonatomic) NSString *requestCode; // ivar: _requestCode


-(BOOL)isUserInitiated;
-(id)urlRequest;
-(id)urlString;


@end


#endif