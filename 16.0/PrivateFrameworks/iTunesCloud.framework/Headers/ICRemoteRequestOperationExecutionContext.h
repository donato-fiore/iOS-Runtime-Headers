// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICREMOTEREQUESTOPERATIONEXECUTIONCONTEXT_H
#define ICREMOTEREQUESTOPERATIONEXECUTIONCONTEXT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ICRemoteRequestOperation.h"

@interface ICRemoteRequestOperationExecutionContext : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (readonly, nonatomic) ICRemoteRequestOperation *remoteRequestOperation; // ivar: _remoteRequestOperation


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRemoteRequestOperation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif