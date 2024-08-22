// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSCTPNRRESPONSEDATA_H
#define IDSCTPNRRESPONSEDATA_H

@class NSString, NSData;
@protocol IDSCTPNRResponseData;

#import <Foundation/Foundation.h>


@interface IDSCTPNRResponseData : NSObject <IDSCTPNRResponseData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *phoneBookNumber; // ivar: _phoneBookNumber
@property (retain, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (retain, nonatomic) NSData *signature; // ivar: _signature
@property (retain, nonatomic) NSString *status; // ivar: _status
@property (nonatomic) BOOL success; // ivar: _success
@property (readonly) Class superclass;


-(id)initWithCTResponse:(id)arg0 phoneBookNumber:(id)arg1 ;


@end


#endif