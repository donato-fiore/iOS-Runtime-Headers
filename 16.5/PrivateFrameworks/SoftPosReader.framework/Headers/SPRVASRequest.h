// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPRVASREQUEST_H
#define SPRVASREQUEST_H

@class NSString, NSData, NSNumber, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPRVASRequest : NSObject <NSSecureCoding>



@property (copy) NSString *merchantId; // ivar: _merchantId
@property (copy) NSData *vasFilter; // ivar: _vasFilter
@property (copy) NSNumber *vasTerminalProtocol; // ivar: _vasTerminalProtocol
@property (copy) NSURL *vasUrl; // ivar: _vasUrl


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVasTerminalProtocol:(id)arg0 merchantId:(id)arg1 vasUrl:(id)arg2 vasFilter:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif