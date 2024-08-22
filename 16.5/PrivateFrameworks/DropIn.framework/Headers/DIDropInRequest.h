// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIDROPINREQUEST_H
#define DIDROPINREQUEST_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DIXPCConnectionManager.h"
#import "DIHandle.h"

@interface DIDropInRequest : NSObject <NSSecureCoding>



@property (weak, nonatomic) DIXPCConnectionManager *connectionManager; // ivar: _connectionManager
@property (retain, nonatomic) NSUUID *existingSessionIdentifier; // ivar: _existingSessionIdentifier
@property (retain, nonatomic) DIHandle *handle; // ivar: _handle


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithHandle:(id)arg0 connectionManager:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif