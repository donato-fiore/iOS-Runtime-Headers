// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBSPROXYSERVER_H
#define CBSPROXYSERVER_H

@class NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CBSProxyServer : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSNumber *port; // ivar: _port
@property (retain, nonatomic) NSString *server; // ivar: _server
@property (retain, nonatomic) NSString *token; // ivar: _token


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServer:(id)arg0 port:(id)arg1 token:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif