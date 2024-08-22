// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICREMOTEREQUESTOPERATION_H
#define ICREMOTEREQUESTOPERATION_H

@protocol NSSecureCoding;


#import "ICRequestOperation.h"

@interface ICRemoteRequestOperation : ICRequestOperation <NSSecureCoding>



@property (nonatomic, getter=_isShadowOperationForRemoteExecution, setter=_setShadowOperationForRemoteExecution:) BOOL _shadowOperationForRemoteExecution; // ivar: __shadowOperationForRemoteExecution
@property (retain, nonatomic) NSObject<NSSecureCoding> *response; // ivar: _response


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)_execute;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif