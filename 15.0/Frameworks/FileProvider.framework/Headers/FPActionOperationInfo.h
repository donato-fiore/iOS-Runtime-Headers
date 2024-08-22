// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPACTIONOPERATIONINFO_H
#define FPACTIONOPERATIONINFO_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FPActionOperationInfo : NSObject <NSSecureCoding>



@property (nonatomic) BOOL _t_clientDrivenReader; // ivar: __t_clientDrivenReader
@property (nonatomic) NSUInteger _t_moveQueueWidth; // ivar: __t_moveQueueWidth
@property (nonatomic) BOOL attachSandboxExtensionsOnXPCEncoding; // ivar: _attachSandboxExtensionsOnXPCEncoding
@property (copy, nonatomic) NSString *operationID; // ivar: _operationID
@property (nonatomic) unsigned int qos; // ivar: _qos
@property (retain, nonatomic) NSArray *roots; // ivar: _roots


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOperationID:(id)arg0 roots:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif