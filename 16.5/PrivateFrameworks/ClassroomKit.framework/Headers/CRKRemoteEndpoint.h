// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKREMOTEENDPOINT_H
#define CRKREMOTEENDPOINT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CRKRemoteEndpoint : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *IPAddress; // ivar: _IPAddress
@property (readonly, nonatomic) unsigned short port; // ivar: _port
@property (readonly, copy, nonatomic) NSString *stringValue;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRemoteEndpoint:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithIPAddress:(id)arg0 port:(unsigned short)arg1 ;


@end


#endif