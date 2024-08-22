// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICREMOTEREQUESTOPERATIONEXECUTIONRESPONSE_H
#define ICREMOTEREQUESTOPERATIONEXECUTIONRESPONSE_H

@class NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICRemoteRequestOperationExecutionResponse : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSError *remoteRequestOperationError; // ivar: _remoteRequestOperationError
@property (retain, nonatomic) NSObject<NSSecureCoding> *remoteRequestOperationResponse; // ivar: _remoteRequestOperationResponse


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRemoteRequestOperationResponse:(id)arg0 remoteRequestOperationError:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif