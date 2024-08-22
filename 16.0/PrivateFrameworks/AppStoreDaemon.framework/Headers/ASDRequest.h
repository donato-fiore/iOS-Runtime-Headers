// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDREQUEST_H
#define ASDREQUEST_H

@class NSUUID;
@protocol ASDRequestDelegate, NSSecureCoding, ASDRequestObserver, ASDRequestProxy;

#import <Foundation/Foundation.h>


@interface ASDRequest : NSObject <ASDRequestDelegate, NSSecureCoding>



@property (weak) NSObject<ASDRequestObserver> *observer; // ivar: _observer
@property (retain) NSObject<ASDRequestProxy> *proxy; // ivar: _proxy
@property (readonly, nonatomic) NSUUID *requestID; // ivar: _requestID


+(BOOL)supportsSecureCoding;
+(id)_sharedBroker;
+(void)cancelAllRequestsWithErrorHandler:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_cancelWithErrorHandler:(id)arg0 ;
-(void)_startWithErrorHandler:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)receiveResponse:(id)arg0 ;


@end


#endif